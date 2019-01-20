#pragma once
#include "STPState.h"
#include <vector>
#include <iostream>
#include <exception>
#include <string.h>
#include <map>
#include <math.h>

// included the NOTHING so i would have a starting forbidden state.

class STP {

public:
	STP();
	~STP();

	void GetSuccessors(STPState &nodeID, std::vector<STPState> &actions);
	void GetOperators(STPState &nodeID, std::vector<STPSlideDir> &operators);
	void ApplyOperator(STPState &s, STPSlideDir o);
	void UndoOperator(STPState &s, STPSlideDir o);
	//int scoreState(STPState &s);  // get the H cost.
	STPSlideDir getOppositeDir(STPSlideDir dir);
	// This doesnt work yet.
	// could have another map lol+
	std::string OperatorToString(STPSlideDir dir) {
		if (dir == UP) {
			return "Up\0";
		}
		else if (dir == DOWN) {
			return "Down\0";
		}
		else if (dir == LEFT) {
			return "Left\0";
		}
		else if (dir == RIGHT) {
			return "Right\0";
		}
		else {
			return "Nothing\0";
		}
	}

	void printWorldStateSpecific(STPState start, STPState goal);
	void updateOpen(STPState& s) {};
	void updateClosed(STPState& s) {};
	void updatePath(STPState& s) {};
	bool isOnClosed(const STPState& s) { return false; };
	float getMovementCost(const STPSlideDir& o) { return 1; }

	void printOperator(STPSlideDir dir) {
		if (dir == UP) {
			printf("UP ");
		}
		else if (dir == DOWN) {
			printf("DOWN ");
		}
		else if (dir == LEFT) {
			printf("LEFT ");
		}
		else if (dir == RIGHT) {
			printf("RIGHT ");
		}
		else {
			printf("NOTHING ");
		}
	}
	void printOperators(std::vector<STPSlideDir> ops) {
		for (int i = 0; i < ops.size(); i++) {
			printOperator(ops[i]);
			printf(",");
		}
		printf("\n");
	}

	struct Goal {
		int x;
		int y;
	};

	std::map<int, Goal> goals;

	
};

