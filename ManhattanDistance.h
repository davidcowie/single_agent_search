#pragma once

#include "Heuristic.h"
#include <map>

template<class S>
class ManhattanDistance : public Heuristic<S> {

public:
	ManhattanDistance();
	float h(const STPState& s, const STPState& goal);
	float h(const GridWorldState& s, const GridWorldState& goal);

private:
	struct Goal {
		int x;
		int y;
	};

	std::map<int, Goal> goals;
};

template<class S>
ManhattanDistance<S>::ManhattanDistance()
{
	goals[0] = Goal{ 0,0 };// { 0, 0 };
	goals[1] = Goal{ 1,0 };
	goals[2] = Goal{ 2,0 };
	// there must be a better way, or place to put this.
	// but this should go in the STP class not in STPState cause it is essentially a constant.
	int counter = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			goals[counter++] = Goal{ j, i };
		}
	}
}
template<class S>
float ManhattanDistance<S>::h(const STPState& s, const STPState& goal) {

	// Just curious if this is faster to have this in here everytime? 
	// rather than just have this be a class attribute?
	// goal is 0 1 2, 3 4 5, 6 7 8, 9 10 11, 12 13 14
	//const int targetX[15] = { 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2 };
	//const int targetY[15] = { 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4 };

	// want to check that this is correct.
	//int h = 0;
	//for (int y = 0; y < ROWS; y++)
	//{
	//	for (int x = 0; x < COLS; x++)
	//	{
	//		if (s.board[x][y] != 0)
	//			h += abs(targetX[s.board[x][y]] - x) + abs(targetY[s.board[x][y]] - y);
	//	}
	//}
	//return h;

	bool ignoreBlank = true;
	int score = 0;
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			// score will = abs(dx) + abs(dy)
			// so dy = row - map[#].y
			// so going to ignore the blank
			if (ignoreBlank && s.board[row][col] == 0) {
				continue;
			}
			int dx = abs(col - goals[s.board[row][col]].x);
			int dy = abs(row - goals[s.board[row][col]].y);
			score += (dx + dy);
		}
	}
	return score;
}
template<class S>
float ManhattanDistance<S>::h(const GridWorldState & s, const GridWorldState & goal)
{

	return abs((s.curX - goal.curX)) + abs((s.curY - goal.curY))*1.0f;
}
