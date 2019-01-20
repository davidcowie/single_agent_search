#pragma once


#include "STP.h"
#include <functional>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "Heuristic.h"
// can work on making it more templated later.
// so also need to pass a heuristic, so can be a function pointer, or a template
// I want to figure out the template.

// could instead of having the getPath take a heuristic, 
// could have the constructor take the function pointer and have that be a class variable.
// then could ahve a set heuristic function.
// think ill do that first actually.
// cause then the get path has the same declaration for all the search algorithms.

//					 return type (name)(parameter types)
// function pointer : double (*fun1)(double) = funName;

// it is iterative deepening on f cost. so need to calc the f cost for each thing

struct aStarStruct {
	STPState state;
	float fcost;
	float hcost;
	float gcost;
	STPSlideDir dirToParent = NOTHING;
	int parentIndex;
};

//std::ostream& operator<<(std::ostream& out, const aStarStruct& s) {
//	// and why not print out the costs
//	//
//	out << "----Printing aStartState ----- \n";
//	out << "Fcost: " << s.fcost << ", hcost: " << s.hcost << ", gcost: " << s.gcost << "\n";
//	//s.state.printState();
//	for (int y = 0; y < s.state.ROWS; y++)
//	{
//		for (int x = 0; x < s.state.COLS; x++)
//		{
//			if (s.state.board[y][x] < 10)
//				out << s.state.board[y][x] << "  ";
//			else
//				out << s.state.board[y][x] << " ";
//		}
//		out << "\n";
//	}
//	return out;
//}
//template<class S>
class IDAStar
{
public:
	// two methods.
	//IDAStar(float (*heuristicFun)(STP&,STPState&));
	IDAStar(const std::function<float(STP&, STPState&)> &heurFun);
	// cant have a member be of type heur, so then need to pass the Heur into the function
	//IDAStar(Heuristic heur);
	~IDAStar();

	void getPath(STP& game, STPState start, STPState& goalState);
	// so should i pass in a list of heurisitics? like an array for when i have multiple?
	void getPathHeurClass(STP& game, STPState start, STPState& goalState, Heuristic<STPState> **heur, int numH);
	//void getPathHeurClass(STP& game, STPState start, STPState& goalState, std::vector<Heuristic*> heurs);
	uint32_t getDepth() { return depth; };
	uint64_t getExpandedNodes() { return expandedNodes; };
	std::vector<STPSlideDir> getDirections() { return path; }

private:
	bool BoundedSearch(STP &stp, aStarStruct &curr, STPState &goal, float limit, float& nextLimit, STPSlideDir forbidden);
	bool BoundedSearchHeurClass(STP &stp, aStarStruct &curr, STPState &goal, float limit, float& nextLimit, STPSlideDir forbidden);
	std::function<float(STP&, STPState&)> heuristic;
	Heuristic<STPState> **heurs;
	//int numHeuristics;
	float(*heur)(STP&, STPState&);
	uint64_t expandedNodes;
	uint32_t depth;
	std::vector<STPSlideDir> path;
	int numHeuristics;
	//std::vector<Heuristic*> *heurs;
};

