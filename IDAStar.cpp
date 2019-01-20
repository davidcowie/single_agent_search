#include "IDAStar.h"



//IDAStar::IDAStar()
//{
//}

//
//IDAStar::IDAStar(float(*heuristicFun)(STP &, STPState &))
//{
//}

// think will use this one first.
IDAStar::IDAStar(const std::function<float(STP&, STPState&)>& heurFun)
{
	heuristic = heurFun;
}

IDAStar::~IDAStar()
{
}
// could try just A* first.
// just uses a priority queue to sort what is taken off next, which is the node with the lowest f cost. 
// could use a struct to hold the like state and the score of the state.
// like f and g cost.

void printAStartStruct(aStarStruct& s) {
	std::cout << "----Printing aStartState ----- \n";
	std::cout << "Fcost: " << s.fcost << ", hcost: " << s.hcost << ", gcost: " << s.gcost << "\n";
	//s.state.printState();
	//for (int y = 0; y < s.state.ROWS; y++)
		for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
			if (s.state.board[y][x] < 10)
				std::cout << s.state.board[y][x] << "  ";
			else
				std::cout << s.state.board[y][x] << " ";
		}
		std::cout << "\n";
	}
	//return out;
}

void IDAStar::getPath(STP & game, STPState start, STPState & goalState)
{
	//printf("start get path\n");
	//int depth = 0;
	depth = 0;
	path.clear();
	expandedNodes = 0;
	uint64_t lastExpansions = 0;
	float sH = heuristic(game, start);
	//printf("must be the heuritic and it is %f\n", sH);
	aStarStruct startS = { start, sH, sH, 0 };
	float nextFLimit = 100000;
	float currentfCostLimit = startS.fcost; // init to start f cost.
	bool found = false;
	while (true) {

		// should compare with boundedSearchSortChild
		if (BoundedSearch(game, startS, goalState, currentfCostLimit, nextFLimit, NOTHING)) {
			found = true;
			break;
		}
		//depth++;

		printf("Bound %.2f complete; %llu total expansions (%llu new)\n", currentfCostLimit, expandedNodes, expandedNodes - lastExpansions);
		currentfCostLimit = nextFLimit;
		nextFLimit = 100000; // need to figure out what to set this to.
		lastExpansions = expandedNodes;
		//printf("ran again\n");
	}
	printf("Goal found at cost %.2f; %llu total expansions\n", currentfCostLimit, expandedNodes);

	/*if (found) {
		printf("found it!\n");
	}*/
	//printf("%u Nodes were expanded.\n", expandedNodes);
	//printf("The equivalent 'depth'(Number of times searched deeper) was: %d\n", depth);

}

void IDAStar::getPathHeurClass(STP & game, STPState start, STPState & goalState, Heuristic<STPState> ** heur, int numH)
{
	//int depth = 0;
	numHeuristics = numH;
	heurs = heur;
	depth = 0;
	path.clear();
	expandedNodes = 0;
	uint64_t lastExpansions = 0;
	//float sH = heuristic(game, start);
	// so thinking also pass in the number of heuristics.
	// so loop thru all the heuristics
	int sH = 0;
	for (int i = 0; i < numH; i++) {
		// why does using heur work but using h doesnt???
		int he = heurs[i]->h(start, goalState);
		if (sH < he) {
			sH = he;
		}
	}
	//printf("must be the heuritic and it is %f\n", sH);
	aStarStruct startS = { start, sH, sH, 0 };
	float nextFLimit = 100000;
	float currentfCostLimit = startS.fcost; // init to start f cost.
	bool found = false;
	while (true) {
		if(BoundedSearchHeurClass(game, startS, goalState, currentfCostLimit, nextFLimit, NOTHING)){
			found = true;
			break;
		}

		printf("Bound %.2f complete; %llu total expansions (%llu new)\n", currentfCostLimit, expandedNodes, expandedNodes - lastExpansions);
		currentfCostLimit = nextFLimit;
		// could do a check that the nextFlimit is more than 1 greater than the current f limit...
		/*if (nextFLimit == (currentfCostLimit + 1)) {
			currentfCostLimit = nextFLimit + 1;
		}*/
		nextFLimit = 100000; // need to figure out what to set this to.
		lastExpansions = expandedNodes;
		//printf("ran again\n");
	}
	printf("Goal found at cost %.2f; %llu total expansions\n", currentfCostLimit, expandedNodes);

	/*if (found) {
	printf("found it!\n");
	}*/
	//printf("%u Nodes were expanded.\n", expandedNodes);
	//printf("The equivalent 'depth'(Number of times searched deeper) was: %d\n", depth);

}


bool IDAStar::BoundedSearch(STP & game, aStarStruct & curr, STPState & goal, float limit, float& nextLimit, STPSlideDir forbidden)
{
	// check if reached the limit.
	// check if f cost of curr is greater than the current limit. if so then stop, also change nextlimit to that fcost.
	// then each time need to keep the min f cost of the onex past the limit.
	if (curr.fcost > limit) {
		// this way, only do this equal operator once per node basically.
		// set the next limit to this ones fcost
		// or just do the check here, like set it in first call, then just
		if (curr.fcost < nextLimit) {
			nextLimit = curr.fcost;
		}
		return false;
		//return curr.state == goal;
	}

	if (curr.state == goal) {
		return true;
	}
	expandedNodes++;

	std::vector<STPSlideDir> ops;
	game.GetOperators(curr.state, ops);
	// need to keep track of this ones costs, and if only want to change 1 copy and leave all of this info in a struct
	// then store it
	int currentFcost = curr.fcost;
	int currentHcost = curr.hcost;
	int currentGcost = curr.gcost;
		
	for (auto act : ops) {
		//STPSlideDir act = ops[scoreIndex[j][1]];
		if (act == forbidden) {
			continue;
		}

		// apply each one, get the opposite, then undo each
		game.ApplyOperator(curr.state, act);
		STPSlideDir opposite = game.getOppositeDir(act);
		// then here need to update the currents stuff
		curr.gcost = currentGcost + 1;
		curr.hcost = heuristic(game, curr.state);
		curr.fcost = curr.gcost + curr.hcost;
		bool result = BoundedSearch(game, curr, goal, limit, nextLimit, opposite);
		game.ApplyOperator(curr.state, opposite);
		// dont think i need all of these. just can use the original g cost each time. 
		//curr.fcost = currentFcost;
		curr.gcost = currentGcost;
		//curr.hcost = currentHcost;
		//printf("new child\n");

		if (result) {
			path.push_back(act);
			return true;
		}
		// now update the min limit, then before a false return or any return, need to update the nextLimit;
	}

	return false;
}

bool IDAStar::BoundedSearchHeurClass(STP & game, aStarStruct & curr, STPState & goal, float limit, float & nextLimit, STPSlideDir forbidden)
{
	// check if reached the limit.
	// check if f cost of curr is greater than the current limit. if so then stop, also change nextlimit to that fcost.
	// then each time need to keep the min f cost of the onex past the limit.
	if (curr.fcost > limit) {
		// this way, only do this equal operator once per node basically.
		// set the next limit to this ones fcost
		// or just do the check here, like set it in first call, then just
		if (curr.fcost < nextLimit) {
			nextLimit = curr.fcost;
		}
		return false;
		//return curr.state == goal;
	}

	if (curr.state == goal) {
		return true;
	}
	expandedNodes++;

	std::vector<STPSlideDir> ops;
	game.GetOperators(curr.state, ops);
	// need to keep track of this ones costs, and if only want to change 1 copy and leave all of this info in a struct
	// then store it
	int currentFcost = curr.fcost;
	int currentHcost = curr.hcost;
	int currentGcost = curr.gcost;

	for (auto act : ops) {
		//STPSlideDir act = ops[scoreIndex[j][1]];
		if (act == forbidden) {
			continue;
		}

		// apply each one, get the opposite, then undo each
		game.ApplyOperator(curr.state, act);
		STPSlideDir opposite = game.getOppositeDir(act);
		curr.gcost = currentGcost + 1;
		//curr.hcost = h->h(curr.state);  //heuristic(game, curr.state);
		curr.hcost = 0;
		
		for (int i = 0; i < numHeuristics; i++) {
			//int he = heurs->at(i)->h(curr.state);  // was using a vector
			int he = heurs[i]->h(curr.state, goal);
			if (curr.hcost < he) {  // take the max one.
				curr.hcost = he;
			}
		}
		curr.fcost = curr.gcost + curr.hcost;
		bool result = BoundedSearchHeurClass(game, curr, goal, limit, nextLimit, opposite);
		game.ApplyOperator(curr.state, opposite);
		curr.gcost = currentGcost;
		if (result) {
			path.push_back(act);
			return true;
		}
	}

	return false;
}


// this was using a vector
//void IDAStar::getPathHeurClass(STP & game, STPState start, STPState & goalState, std::vector<Heuristic*> huerstts)
//{
//	//int depth = 0;
//	//numHeuristics = huerstts.size();
//	//h = heur;
//	heurs = &huerstts;
//	depth = 0;
//	path.clear();
//	expandedNodes = 0;
//	uint64_t lastExpansions = 0;
//	//float sH = heuristic(game, start);
//	// so thinking also pass in the number of heuristics.
//	// so loop thru all the heuristics
//	int sH = 0;
//	printf("Heuristic costs(i::cost): ");
//	for (int i = 0; i < heurs->size(); i++) {
//		// why does using heur work but using h doesnt???
//		//heurs->at(i)->printSt();
//		// so issue seems to be with the second heuristic..
//		int he = heurs->at(i)->h(start);
//		printf(" %d:: %d, ",i, he);
//
//		if (sH < he) {
//			sH = he;
//		}
//		//h[0]
//	}
//	printf("\n");
//	//int sH = h[0]->h(start);
//	//printf("must be the heuritic and it is %f\n", sH);
//	aStarStruct startS = { start, sH, sH, 0 };
//	float nextFLimit = 100000;
//	float currentfCostLimit = startS.fcost; // init to start f cost.
//	bool found = false;
//	while (true) {
//
//		// should compare with boundedSearchSortChild
//		// CHANGE TO THE RIGHT FUNCTION!!!!
//		// when use the normal BoundedSearch, the time is still slower, by a good amount... 
//		// why??
//		if(BoundedSearchHeurClass(game, startS, goalState, currentfCostLimit, nextFLimit, NOTHING)){
//		//if (BoundedSearch(game, startS, goalState, currentfCostLimit, nextFLimit, NOTHING)) {
//			found = true;
//			break;
//		}
//		//depth++;
//
//		printf("Bound %.2f complete; %llu total expansions (%llu new)\n", currentfCostLimit, expandedNodes, expandedNodes - lastExpansions);
//		currentfCostLimit = nextFLimit;
//		nextFLimit = 100000; // need to figure out what to set this to.
//		lastExpansions = expandedNodes;
//		//printf("ran again\n");
//	}
//	printf("Goal found at cost %.2f; %llu total expansions\n", currentfCostLimit, expandedNodes);
//
//	/*if (found) {
//	printf("found it!\n");
//	}*/
//	//printf("%u Nodes were expanded.\n", expandedNodes);
//	//printf("The equivalent 'depth'(Number of times searched deeper) was: %d\n", depth);
//
//}

