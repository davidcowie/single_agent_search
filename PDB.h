#pragma once

#include <vector>
#include <deque>
#include "STPState.h"
#include "STP.h"
#include "Heuristic.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>


class PDB : public Heuristic<STPState>
{
public:
	// should take a pattern.
	PDB(std::vector<int> patt, bool useRv1);
	~PDB();

	// want to compute rank from a state.
	// so need to pass through a state.
	void computeRank(const STPState& state, uint64_t& rank,int* dual);
	//std::vector<int> convertToMixedRadix(int* dual); // std::vector<int> dual);
	void convertToMixedRadix(int* dual); // std::vector<int> dual);
	//uint64_t rankFromMixed(std::vector<int> mixed, int N);
	uint64_t rankFromMixed(int* mixed, int N);
	std::vector<int> unrank(int rank, int patLength, int N);
	std::vector<int> convertMixedToFixed(std::vector<int> mixed);

	// GOAL PART ISNT IMPLEMENTED!!!!!
	float h(const STPState& s, const STPState& goal);
	float h(const GridWorldState& s, const GridWorldState& goal);

private:
	std::vector<int> pattern;
	// size of pDatabase should be (numTiles)/(pattern length)
	// wait is it pattern length or (numTiles - patternlength)
	std::vector<uint8_t> pDatabase;

	struct BFSNode {
		STPState s;
		STPSlideDir forbidden;
		int depth;
	};

	std::vector<int> pdbDistribution;
	int* dual;

	bool useRankv1;
	/*
		For future, would save the database to a file or something,
		then when a PDB was constructed with a pattern, would have a look up table to see if that database has
		already been created, if so, just load that, if not then construct it and add it to the look up table.
	*/
	std::vector<std::string> savedPatternNames;
};

