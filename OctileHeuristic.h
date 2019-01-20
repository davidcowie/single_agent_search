#pragma once

#include "Heuristic.h"

#include <algorithm>

class OctileHeuristic : public Heuristic<GridWorldState>
{
public:
	OctileHeuristic();
	~OctileHeuristic();
	float h(const GridWorldState& s, const GridWorldState& goal);
	//float h(const STPState& s, const STPState& goal);
private:
	float minDiagCost;
};

