#pragma once
// So the state is going to be essentially a 2D array.
// or can do a vector with the rank and do those operations.
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
//#include "STP.h"
//#include "RankStuff.h"

enum STPSlideDir { NOTHING, UP, DOWN, LEFT, RIGHT };
const int ROWS = 5;
const int COLS = 3;

class STPState
{
public:
	STPState();
	// Want for testing to be able to pass in an array to init it to.
	// so should i rank the state upon construction, and then store that as a member variable.
	// so i dont have to recompute everytime...
	STPState(int b[ROWS][COLS]);
	STPState(const STPState& s);

	//bool operator==(const STPState& s);

	bool operator!=(const STPState& s);
	// think i need this to use a set... 
	// but like does this really matter? for the STPState, it doesnt really actually have meaning.
	// so could i just always return true? lol
	bool operator<(const STPState& s) const {
		return true;
	}
	STPState& operator=(const STPState& s);
	~STPState();
	//const int ROWS = 5; // 5
	//const int COLS = 3; // 3
	int board[ROWS][COLS];
	int blankRow = 0;
	int blankCol = 0;
	bool onClosed = false;
	// should be able to get rid of this.
	STPSlideDir previousDir;// = NOTHING;


	void swapPositions(int r1, int c1, int r2, int c2) { // throw(int) {
		if (r1 < 0 || c1 < 0 || r2 < 0 || c2 < 0 || r1 >= ROWS || r2 >= ROWS || c1 >= COLS || c2 >= COLS) {
			//throw 20;
			return;
		}
		if (board[r1][c1] != 0) {
			// for my sake, the first coordinates need to be the blank. 
			// (could have done: r1 == blankRow && c1 == blankCol)
			//printf("not the blank space.\n");
			//throw 123;
		}
		int tmp = board[r1][c1];
		board[r1][c1] = board[r2][c2];
		board[r2][c2] = tmp;
		blankCol = c2;
		blankRow = r2;
	};
	void printState();

	
};

std::ostream& operator<<(std::ostream& out, const STPState& s);
// FORGOT TO ADD THIS IN!!!!
bool operator==(const STPState& left, const STPState& right);


namespace std {

	template <>
	struct hash<STPState>
	{
		std::size_t operator()(const STPState& k) const
		{
			using std::size_t;
			using std::hash;
			using std::string;

			// Compute individual hash values for first,
			// second and third and combine them using XOR
			// and bit shifting:
			// here use the ranking function.

			int dual[15];
			uint64_t rank = 0;
			//computeRank(k, rank, dual);
			// so a decent way to do this, is to compute the dual, then stay in fixed radix
			int counter = 15;
			for (int i = 0; i < ROWS; i++) {
				for (int j = 0; j < COLS; j++) {
					rank += k.board[i][j] * pow(15, counter);
					counter--;
				}
			}

			return rank;
		}
	};

}

