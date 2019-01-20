#pragma once
#include "Heuristic.h"
#include <vector>

// not sure if need to make heuristic a template class now too.

template<typename S>
class MaxHeuristic : public Heuristic<S>
{
public:
	void addHeuristic(Heuristic<S> *);
	float h(const S& s1, const S& s2);
private:
	std::vector<Heuristic<S> *> heuristics;
};

template<typename S>
void MaxHeuristic<S>::addHeuristic(Heuristic<S> * heur)
{
	heuristics.push_back(heur);
}

template<typename S>
float MaxHeuristic<S>::h(const S& s1, const S& s2) {
	float hmax = 0;
	for (int i = 0; i < heuristics.size(); i++) {
		hmax = std::max(hmax, heuristics[i]->h(s1, s2));
	}

	return hmax;
}
