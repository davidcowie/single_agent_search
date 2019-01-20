#pragma once

#include "Heuristic.h"
#include "AStar.h"
#include "CanonicalAStar.h"
#include "OctileHeuristic.h"
#include "MaxHeuristic.h"

class DifferentialHeuristic : public Heuristic<GridWorldState>
{
public:
	// so prolly want to take in a start state(pivot) state in construction... or should this suppport multiple pivot points.
	// or would i want like a setPivot function to then rerun everything... nah
	DifferentialHeuristic();
	DifferentialHeuristic(GridWorld& game, GridWorldState &s);
	~DifferentialHeuristic();
	float h(const GridWorldState& s, const GridWorldState& goal);
	float h(const STPState& s, const STPState& goal);
	void setUpHeuristic(const GridWorld& gd, GridWorldState& s);
	void setUpHeuristic(GridWorldState& s);
	void printHeuristic();
	GridWorldState getPivot() { return pivot; }
private:
	// just run a search from that state passed in from the constructor. then can look it up in the h functionn.
	//AStar<GridWorld, GridWorldState, GridWorldMovements> astar;
	CanonicalAStar<GridWorld, GridWorldState, GridWorldMovements> astar;
	// instead of using astar to hold the g costs, could put them all into a vector in here, then can have maybe faster lookup times.
	// and could do that here cause this is only used for GridWorld
	GridWorldState pivot;
	GridWorld gridWorld;
	int WORLDWIDTH; // set in constructor.
	std::vector<float> gcosts;

	int getIndex(const GridWorldState& s) {
		//return s.curX*WORLDWIDTH + s.curY;
		return s.curY*WORLDWIDTH + s.curX;
	}
};

