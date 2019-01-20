#pragma once

#include "STPState.h"
#include "GridWorld.h"
#include <math.h>

template<class state>
class Heuristic {
public:
	virtual ~Heuristic() {};
	//virtual float h(const STPState& s, const STPState& goal) = 0;
	virtual float h(const state& s, const state& goal) = 0;
};
