#pragma once

#include <sstream>
#include <iterator>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
//#include <algorithm>

// temp for now.
//const int WORLDWIDTH = 120;
//const int WORLDHEIGHT = 180;
//static int WORLDWIDTH;// = 120;
//static int WORLDHEIGHT;// = 180;

// this is for 4 directional movement.
// need to have a different name in every enum...
// added in cardinal.
enum GridWorldMovements {
	kgNOTHING,
	kgUP,
	kgDOWN,
	kgLEFT,
	kgRIGHT,
	kgUPLEFT,
	kgUPRIGHT,
	kgDOWNLEFT,
	kgDOWNRIGHT
};

class GridWorldState {
public:
	GridWorldState();
	GridWorldState(const GridWorldState& s);
	GridWorldState(int x, int y);
	// here dont have an == operator...
	// if add this in, get that it is ambigious...
	/*bool operator==(const GridWorldState& s) const {
		return (curX == s.curX) && (curY == s.curY);
	}*/
	bool operator<(const GridWorldState& s) const {
		int leftHandSide = this->curX + this->curY;
		int rightHandSide = s.curX + s.curY;
		return true;
		//return (leftHandSide < rightHandSide);
	}
	int curX, curY;
	void printState();
};

bool operator==(const GridWorldState& g1, const GridWorldState& g2);

class GridWorld {
public:
	GridWorld() { WORLDHEIGHT = 0; WORLDWIDTH = 0; };
	int WORLDHEIGHT;
	int WORLDWIDTH;
	GridWorld(std::string filemappath);
	~GridWorld();
	// so -1 will be blocked, 0 will be clear, then can use different numbers for different things.
	//int board[WORLDHEIGHT][WORLDWIDTH]; // this will very. -- so do i need to put this on the heap?
	//int **board;
	std::vector<int> grid;
	std::vector<int> printingGrid;

	GridWorld& operator=(const GridWorld &gw) {
		WORLDHEIGHT = gw.WORLDHEIGHT;
		WORLDWIDTH = gw.WORLDWIDTH;
		canGoDiagonal = gw.canGoDiagonal;
		diagEdgeCost = gw.diagEdgeCost;
		//board = new int*[WORLDHEIGHT]; // [WORLDWIDTH];
		//for (int i = 0; i < WORLDHEIGHT; i++) {
		//	board[i] = new int[WORLDWIDTH];
		//}

		//for (int i = 0; i < WORLDHEIGHT; i++) {
		//	for (int j = 0; j < WORLDWIDTH; j++) {
		//		board[i][j] = gw.board[i][j];
		//	}
		//}
		//grid = gw.grid;
		for (int i = 0; i < gw.grid.size(); i++) {
			grid.push_back(gw.grid[i]);
		}
		//printingGrid = gw.printingGrid;
		for (int i = 0; i < gw.grid.size(); i++) {
			printingGrid.push_back(gw.printingGrid[i]);
		}
		return *this;
	};

	void GetSuccessors(GridWorldState &s, std::vector<GridWorldState> &states);

	void GetOperators(GridWorldState &s, std::vector<GridWorldMovements> &operators);
	void GetCanonicalOperators(GridWorldState &s, GridWorldMovements o, std::vector<GridWorldMovements> &operators);
	void ApplyOperator(GridWorldState &s, GridWorldMovements o);
	void UndoOperator(GridWorldState &s, GridWorldMovements o);
	void InvertOperator(GridWorldMovements & o);
	GridWorldMovements getOppositeDir(GridWorldMovements o);
	double getMovementCost(const GridWorldMovements& o);
	double getMovementCost(const GridWorldState& s, const GridWorldMovements& o) {
		return getEdgeCost(s)*getMovementCost(o);
	}
	float getEdgeCost(const GridWorldState& s) {
		// basically just return the value in the grid at that state.
		return grid[getIndex(s)];
	}
	void setCanGoDiagonal(const bool& b) { canGoDiagonal = b; }
	void printWorld();
	void printWorldStateSpecific(GridWorldState start, GridWorldState goal);
	void printOperator(GridWorldMovements op);
	void printOperators(std::vector<GridWorldMovements> ops);
	void updateOpen(GridWorldState& s);
	void updateClosed(GridWorldState& s);
	void setPivot(const GridWorldState s) {
		//board[s.curY][s.curX] = pivotVal;
		//printingGrid[getIndex(s)] = pivotVal;
		printingGrid[getIndex(s)] = -5;
	}
	void updatePath(GridWorldState& s) {
		//board[s.curY][s.curX] = -4;
		printingGrid[getIndex(s)] = -4;
	}
	void clearOpenClosed();
	void copyBoard(int **b);
	bool isOnClosed(const GridWorldState& s) {
		//return (board[s.curY][s.curX] == 2);
		return false;
	}
	void setGoal(GridWorldState& s) {
		goalY = s.curY;
		goalX = s.curX;
	};
	bool isValid(const GridWorldState& s) {
		if (s.curX >= 0 && s.curX <= WORLDWIDTH - 1 && s.curY >= 0 && s.curY <= WORLDHEIGHT - 1 && !isBlocked(s)) {
			return true;
		}
		return false;
	}

	bool isBlocked(const GridWorldState& s) {
		return grid[getIndex(s)] == -1;
	}

	// feel like this would be an expensive check if pass in a vector everytime, even by reference...
	// maybe just start with this for now... but maybe need to add in another operation.
	// like if it isnt a jump point, then just return the same operation that was passed in.
	// actually, if jump point because of both sides, then return the kgNothing cause that will get all operators and that would repeat just the parent
	// but actually i skip over that anyway so that should be fine.
	GridWorldMovements isJumpPoint(const GridWorldState& s, GridWorldMovements o) {
		// still need cases for each thing.
		bool side1 = false;
		bool side2 = false;
		switch (o) {
		case kgRIGHT:
			// chcek up left and down left. if either of those is blocked, an up or down isnt blocked, then jump point.
			// return a direction to go, and kgNothing if not a jump point.
			if (isBlocked({ s.curX - 1, s.curY + 1 }) && !isBlocked({ s.curX, s.curY + 1 })) {
				// down left is blocked, and down isnt blocked, so it is a jump point, and want to go down right.
				side1 = true;
				//return kgDOWNRIGHT;
			}
			if (isBlocked({ s.curX - 1, s.curY - 1 }) && !isBlocked({ s.curX, s.curY - 1 })) {
				//return kgUPRIGHT;
				side2 = true;
			}
			if (side1 && side2) {
				return kgNOTHING;
			}
			else if (side1 || side2) { // this should be the  same.
				return side1 ? kgDOWNRIGHT : kgUPRIGHT;
			}
			/*else if (side1) {
				return kgDOWNRIGHT;
			}
			else if (side2) {
				return kgUPRIGHT;
			}*/
			
			break;
		case kgLEFT:
			if (isBlocked({ s.curX + 1, s.curY + 1 }) && !isBlocked({ s.curX, s.curY + 1 })) {
				// down left is blocked, and down isnt blocked, so it is a jump point, and want to go down right.
				side1 = true;
				//return kgDOWNLEFT;
			}
			if (isBlocked({ s.curX + 1, s.curY - 1 }) && !isBlocked({ s.curX, s.curY - 1 })) {
				//return kgUPLEFT;
				side2 = true;
			}

			if (side1 && side2) {
				return kgNOTHING;
			}
			else if (side1 || side2) { // this should be the  same.
				return side1 ? kgDOWNLEFT : kgUPLEFT;
			}
			break;
		case kgUP:
			if (isBlocked({ s.curX - 1, s.curY + 1 }) && !isBlocked({ s.curX - 1, s.curY })) {
				// down left is blocked, and down isnt blocked, so it is a jump point, and want to go down right.
				//return kgUPLEFT;
				side1 = true;
			}
			if (isBlocked({ s.curX + 1, s.curY + 1 }) && !isBlocked({ s.curX+1, s.curY})) {
				//return kgUPRIGHT;
				side2 = true;
			}

			if (side1 && side2) {
				return kgNOTHING;
			}
			else if (side1 || side2) { // this should be the  same.
				return side1 ? kgUPLEFT : kgUPRIGHT;
			}
			break;
		case kgDOWN:
			if (isBlocked({ s.curX - 1, s.curY - 1 }) && !isBlocked({ s.curX - 1, s.curY })) {
				// down left is blocked, and down isnt blocked, so it is a jump point, and want to go down right.
				//return kgDOWNLEFT;
				side1 = true;
			}
			if (isBlocked({ s.curX + 1, s.curY - 1 }) && !isBlocked({ s.curX + 1, s.curY })) {
				//return kgDOWNRIGHT;
				side2 = true;
			}
			if (side1 && side2) {
				return kgNOTHING;
			}
			else if (side1 || side2) { // this should be the  same.
				return side1 ? kgDOWNLEFT : kgDOWNRIGHT;
			}
			break;
		default:
			return o;
			break;
		}
		return o;
	}

	int goalY;
	int goalX;
private:
	bool canGoDiagonal;
	double diagEdgeCost;
	const int pivotVal = -5;
	int getIndex(const GridWorldState& s) {
		//return s.curX*WORLDWIDTH + s.curY;
		return s.curY*WORLDWIDTH + s.curX;
	}
};


//void printWorldStateSpecific(GridWorld world, GridWorldState start, GridWorldState goal) {
//	for (int row = 0; row < WORLDHEIGHT; row++) {
//		for (int col = 0; col < WORLDWIDTH; col++) {
//			if (row == start.curY && col == start.curX) {
//				printf("%4c ", 's');
//			}
//			else if (row == goal.curY && col == goal.curX) {
//				printf("%4c ", 'g');
//			}
//			else {
//				printf("%4d ", world.board[row][col]);
//			}
//		}
//		printf("\n");
//	}
//}

namespace std {
	template <>
	struct hash<GridWorldState>
	{
		std::size_t operator()(const GridWorldState& k) const
		{
			using std::size_t;
			using std::hash;
			//using std::string;

			// Compute individual hash values for first,
			// second and third and combine them using XOR
			// and bit shifting:

			//return ((hash<int>()(k.curX) ^ (hash<int>()(k.curY) << 1)));
			return (k.curX << 16) | (k.curY);
		}
	};
}