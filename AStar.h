#pragma once

#include <functional>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include "AStarStruct.h"
#include "AStarOpenList.h"
#include "OpenList.h"
#include "Heuristic.h"
//#include "MaxHeuristic.h"

// HAD an issue with the == operator. how it was defined as apart of the STPState class vs outside of it. FIXED.


/*
AStar
This is an efficient version of astar. it uses the OpenList to efficiently work.
There are 2 getPaths. the first one getPath() is the most efficient one. getPath2() was an earlier implementation
that used the built in priority queue and a vector closed list. In some cases it was faster which is why i kept it. Also just to remember my progress along the way.
The getPath gets two sets of directions. It gets a list of operators, and it also gets a list of entire states to the goal. 
The entire states is used for when i am using a gridWorld, so i could update a board that would be nice to print out putting '!' along the optimal path.
*/

// Enviroment, State, Operator
template <class E, class S, class O>
class AStar
{
public:
	AStar();
	~AStar();
	//void GetPath(E & game, S start, S & goal, std::function<float(E&, S&)> heuristic, int& count, bool printPath);
	void GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numHeurs, bool printPath, O forbiddenOp);
	void GetPath3(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp);
	void GetPath2(E & game, S start, S & goal, Heuristic<S>** heurs, int numHeurs, bool printPath, O forbiddenOp);
	uint64_t GetNodesExpanded();
	void setHeuristicWeight(const float& w);
	std::vector<O> getDirections() {
		// prolly should just make a copy then reverse but eh. small details.
		//std::reverse(opPath.begin(), opPath.end()); // so this doesnt work.
		std::vector<O> p;
		for (int i = opPath.size() - 1; i >= 0; i--) {
			p.push_back(opPath[i]);
		}
		return p;
	}
	void setStopAtGoal(const bool& b) { stopAtGoal = b; }
	float getGCost(const S& s) {
		// return openlist.getGCost(s);
		// maybe should make sure the state is in there...
		// actually seems to just return 0 if it isnt there. which is fine.
		return gcosts[s];
	}
private:
	uint64_t expansions;
	float heuristicWeight;
	std::vector<O> opPath;
	bool stopAtGoal;
	OpenList<S, O> openlist;
	std::unordered_map<S, float> gcosts;
	int opPathLength;
};

template <class E, class S, class O>
AStar<E, S, O>::AStar()
{
	//printf("%d\n", a);
	heuristicWeight = 1;
	stopAtGoal = true;
}

template <class E, class S, class O>
AStar<E, S, O>::~AStar()
{
}

// so now maybe instead of passing 1 heuristic, need to pass in a list of them.
template <class E, class S, class O>
void AStar<E, S, O>::GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numH, bool printPath, O forbiddenOp)
{
	//start.printState();
	//printf("printed path\n");
	expansions = 0;
	opPath.clear();
	opPathLength = 0;
	// might also need to clear g costs.

	// is also the closed list.
	//OpenList<S, O> openlist = OpenList<S, O>();
	openlist = OpenList<S, O>();

	float startH = 0;
	for (int i = 0; i < numH; i++) {
		// why does using heur work but using h doesnt???
		int he = heurs[i]->h(start, goal) * heuristicWeight;
		if (startH < he) {
			startH = he;
		}
	}
	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	//inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	inAStarStruct<S, O> startState(start, startH, startH, 0, forbiddenOp, -1, -1);
	openlist.insert(startState);

	std::vector<S> path;
	std::vector<S> success;
	std::vector<O> sucs;
	std::vector<inAStarStruct<S, O>> parents;
	bool found = false;
	bool isOnClosed = false;
	// 1 for on open, 2 for on closed.
	// s for current.
	while (!openlist.empty()) {
		//getchar();
		/*printf("OPENLIST: \n");
		openlist.printOpenList();*/

		inAStarStruct<S, O> current = openlist.top();
		// could make a map in here... for the closed list type of thing.
		// I also could just map a state to a float to map: state -> gcost.
		// but still thinnk would need to have somehting as a class variable...
		gcosts[current.state] = current.gcost;
		// DEBUG PRINTING
		//printf("OPENLIST after top:\n");
		//openlist.printOpenList();

		//inAStarStruct<S,O> current = pqueue.top();
		/*printf("current node:\n");
		current.state.printState();
		std::cout << current;
		game.printWorldStateSpecific(current.state, goal); */

		parents.push_back(current);
		// put on closed list.
		game.updateClosed(current.state);
		openlist.putOnClosed(current.state);

		// just take this out if want to continue after the goal.
		if (stopAtGoal && current.state == goal) {
			found = true;
			// can loop over current to find the path;
			int curIndex = expansions;
			// b/c the start state is at index 0
			//STPState st = current.state;
			inAStarStruct<S, O> ast = current;
			path.push_back(ast.state);
			opPath.push_back(ast.dirToParent);
			while (curIndex != 0) {
				//game.ApplyOperator(current.state, current.dirToParent)
				curIndex = ast.parentIndex;
				ast = parents[ast.parentIndex];
				path.insert(path.begin(), ast.state);// , sizeof(ast.state));
				opPath.push_back(ast.dirToParent);
				//opPath.insert(path.begin(), ast.dirToParent);
				opPathLength += 1;
			}
			break;
		}

		expansions++;
		game.GetOperators(current.state, sucs);
		for (O s : sucs) {
			if (s == game.getOppositeDir(current.dirToParent)) {
				continue;
			}
			S st(current.state);
			game.ApplyOperator(st, s);

			if (openlist.isOnClosed(st)) {
				//printf(" On Closed: ");
				//st.printState();
				continue;
			}
			
			float h = 0;
			float sH = 0;
			for (int i = 0; i < numH; i++) {
				h = heurs[i]->h(st, goal) * heuristicWeight;
				if (sH < h) {
					sH = h;
				}
			}

			//inAStarStruct<S, O> ast = { st, (current.gcost + 1 + sH), sH, current.gcost + 1, s, expansions - 1 };
			// instead of + 1, should look up the cost from the board.
			float newGCost = current.gcost + game.getMovementCost(s);
			inAStarStruct<S, O> ast(st, (newGCost + sH), sH, newGCost, s, expansions - 1 , -1);
			game.updateOpen(st);

			openlist.insert(ast);
		}
	}

	if (printPath) {
		//printf("Gcosts: ");
		for (S s : path) {
			//s.printState();
			game.updatePath(s);
			
			/*printf("%f, ",openlist.getGCost(s));
			printf("(%f) ", gcosts[s]);*/
		}
		//printf("\n");
	}
	//printf("Optimal Moves Maybe: %u\n", opPath.size());
	//printf("even more maybe optimal length: %d\n", opPathLength);

	// maybe show by looking up the g cost of each thing in the path.
	// just loop through the path and print out the g cost of each thing along the way. -- wait it isnt on the closed list any more because 
	// i decided to make my closed list just hold an int rather than an a star struct.
}


// so now maybe instead of passing 1 heuristic, need to pass in a list of them.
template <class E, class S, class O>
void AStar<E, S, O>::GetPath3(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp)
{
	//start.printState();
	//printf("printed path\n");
	expansions = 0;
	opPath.clear();
	opPathLength = 0;
	// might also need to clear g costs.

	// is also the closed list.
	OpenList<S, O> openlist = OpenList<S, O>();
	//AStarOpenList<S> openlist;
	//openlist = OpenList<S, O>();

	float startH =  heuristic->h(start, goal) * heuristicWeight;
	
	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	//inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	inAStarStruct<S, O> startState(start, startH, startH, 0, forbiddenOp, -1, -1);
	//inAStarStruct<S, O> startState(start, startH, startH, game.getMovementCost(start, forbiddenOp), forbiddenOp, -1, -1);
	openlist.insert(startState);

	std::vector<S> path;
	std::vector<S> success;
	std::vector<O> sucs;
	std::vector<inAStarStruct<S, O>> parents;
	bool found = false;
	bool isOnClosed = false;
	// 1 for on open, 2 for on closed.
	// s for current.
	while (!openlist.empty()) {
		//getchar();
		/*printf("OPENLIST: \n");
		openlist.printOpenList();*/
		//if(expansions == 486)
			//printf("Searching!%d\n", expansions);

		inAStarStruct<S, O> current = openlist.top();
		// could make a map in here... for the closed list type of thing.
		// I also could just map a state to a float to map: state -> gcost.
		// but still thinnk would need to have somehting as a class variable...
		gcosts[current.state] = current.gcost;
		/*if (expansions == 485) {
			printf("made it here.\n");
			current.state.printState();
			game.printWorldStateSpecific(current.state, goal);
		}*/
		// DEBUG PRINTING
		//printf("OPENLIST after top:\n");
		//openlist.printOpenList();

		//inAStarStruct<S,O> current = pqueue.top();
		/*printf("current node:\n");
		current.state.printState();
		std::cout << current;
		game.printWorldStateSpecific(current.state, goal); */

		parents.push_back(current);
		// put on closed list.
		game.updateClosed(current.state);
		openlist.putOnClosed(current.state);

		// just take this out if want to continue after the goal.
		if (stopAtGoal && current.state == goal) {
			found = true;
			// can loop over current to find the path;
			int curIndex = expansions;
			// b/c the start state is at index 0
			//STPState st = current.state;
			inAStarStruct<S, O> ast = current;
			path.push_back(ast.state);
			opPath.push_back(ast.dirToParent);
			while (curIndex != 0) {
				//game.ApplyOperator(current.state, current.dirToParent)
				curIndex = ast.parentIndex;
				ast = parents[ast.parentIndex];
				path.insert(path.begin(), ast.state);// , sizeof(ast.state));
				opPath.push_back(ast.dirToParent);
				//opPath.insert(path.begin(), ast.dirToParent);
				opPathLength += 1;
			}
			break;
		}

		expansions++;
		game.GetOperators(current.state, sucs);
		/*if(expansions == 486)
			printf("Got operators. size ops: %u\n", sucs.size());*/
		for (O s : sucs) {
			/*if (expansions == 486) {
				printf("operator: ");
				game.printOperator(s);
				printf("\n");
			}*/
			if (s == game.getOppositeDir(current.dirToParent)) {
				continue;
			}
			S st(current.state);
			game.ApplyOperator(st, s);
			//printf("Applied\n");
			if (openlist.isOnClosed(st)) {
				//printf(" On Closed: ");
				//st.printState();
				continue;
			}
			/*if (expansions == 486) {
				printf("pre heuristic\n");
				st.printState();
			}*/
			float sH = 0;
			if (heuristicWeight != 0) {
				 sH = heuristic->h(st, goal) * heuristicWeight;
			}
			/*if (expansions == 486) {
				printf("post heuristic\n");
				st.printState();
			}*/
			//float newGCost = current.gcost + game.getMovementCost(s);// +game.getEdgeCost(st);
			float newGCost = current.gcost + game.getMovementCost(st, s);// +game.getEdgeCost(st); // trying to add variable edge costs...
			inAStarStruct<S, O> ast(st, (newGCost + sH), sH, newGCost, s, expansions - 1, -1);
			/*if (expansions == 486)
				printf("post create struct.\n");*/
			game.updateOpen(st);

			/*if (expansions == 486)
				openlist.printOpenList();*/

			openlist.insert(ast);
			/*if(expansions == 486)
				printf("finished op\n");*/
		}
	}

	if (printPath) {
		//printf("Gcosts: ");
		for (S s : path) {
			//s.printState();
			game.updatePath(s);

			/*printf("%f, ",openlist.getGCost(s));
			printf("(%f) ", gcosts[s]);*/
		}
		//printf("\n");
	}
	//printf("Optimal Moves Maybe: %u\n", opPath.size());
	//printf("even more maybe optimal length: %d\n", opPathLength);

	// maybe show by looking up the g cost of each thing in the path.
	// just loop through the path and print out the g cost of each thing along the way. -- wait it isnt on the closed list any more because 
	// i decided to make my closed list just hold an int rather than an a star struct.
}




template <class E, class S, class O>
//void AStar<E, S, O>::GetPath(E & game, S start, S & goal, std::function<float(E&, S&)> heuristic, int& count, bool printPath)
void AStar<E, S, O>::GetPath2(E & game, S start, S & goal, Heuristic<S>** heurs, int numH, bool printPath, O forbiddenOp)
{
	expansions = 0;
	opPath.clear();
	//start.printState();
	//printf("printed path\n");
	// use a prioity queue.
	// need to make my compare function

	auto cmp = [](inAStarStruct<S, O> left, inAStarStruct<S, O> right) {
		if (left.fcost == right.fcost) {
			// tie break
			// need to make sure my thing is the right way.
			// def needs to be this way.
			return left.gcost < right.gcost;

		}
		return left.fcost > right.fcost;
	};

	// not sure if using a deque or a vector is better...
	// here issue with adding in same state twice.
	std::priority_queue<inAStarStruct<S, O>, std::vector<inAStarStruct<S, O>>, decltype(cmp)> pqueue(cmp);
	//OpenList<S, O> openlist;
	// closed list.
	//std::unordered_set<S> closedList;
	//std::set<S> closedList;
	// want to have a contains method.
	std::vector<S> closedList;

	float startH = 0;
	for (int i = 0; i < numH; i++) {
		// why does using heur work but using h doesnt???
		int he = heurs[i]->h(start, goal);
		if (startH < he) {
			startH = he;
		}
	}
	//float startH = heuristic(game, start);
	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	//inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	inAStarStruct<S, O> startState(start, startH, startH, 0, forbiddenOp, -1, -1 );
	//std::cout << "startState: \n" << startState;
	//std::cout << "goalState:\n" << goal;
	pqueue.push(startState);
	//openlist.insert(startState);

	std::vector<S> path;

	//std::vector<S> success;
	std::vector<O> sucs;
	std::vector<inAStarStruct<S, O>> parents;
	bool found = false;
	//int count = 0;
	bool isOnClosed = false;
	// 1 for on open, 2 for on closed.
	// s for current.
	while (!pqueue.empty()) {
		//getchar();

		isOnClosed = false;
		//printf("Something happened.\n");
		//printf("---- start print queue----\n");
		//print_queue(pqueue);
		//printf("----- end queue ----\n");
		// get the top one, using pop
		inAStarStruct<S, O> current = pqueue.top();

		//printf("current node:\n");
		//current.state.printState();
		//std::cout << current;
		//game.printWorldStateSpecific(current.state, goal);

		// ADDED 5/6/18 12:40
		bool alreadyOnClosed = false;
		for (int i = 0; i < closedList.size(); i++) {
			if (closedList[i] == current.state) {
				// then dont expand twice.
				alreadyOnClosed = true;
				break;
			}
		}
		if (alreadyOnClosed) {
			pqueue.pop();
			continue;
		}

		parents.push_back(current);
		// put on closed list.

		//game.board[current.state.curY][current.state.curX] = 2;
		game.updateClosed(current.state);

		closedList.push_back(current.state); // Vector closed list.
											 //closedList.insert(current.state); // Set closed list.
											 //printf("parent: ");
											 //parents[current.parentIndex].state.printState();

		if (current.state == goal) {
			found = true;
			// can loop over current to find the path;
			int curIndex = expansions;
			// b/c the start state is at index 0
			//STPState st = current.state;
			inAStarStruct<S, O> ast = current;
			while (curIndex != 0) {
				//game.ApplyOperator(current.state, current.dirToParent)
				curIndex = ast.parentIndex;
				ast = parents[ast.parentIndex];
				path.insert(path.begin(), ast.state);// , sizeof(ast.state));
				//opPath.insert(path.begin(), ast.dirToParent);
				opPath.push_back(ast.dirToParent);
			}
			break;
		}
		pqueue.pop();
		expansions++;
		// then get its successors, and simply push them onto the queue.
		//game.GetSuccessors(current.state, success);
		game.GetOperators(current.state, sucs);
		// instead using operators
		// put those children on
		for (O s : sucs) {
			isOnClosed = false;
			// have to make a copy and then add it
			if (s == game.getOppositeDir(current.dirToParent)) {
				continue;
			}
			S st(current.state);
			game.ApplyOperator(st, s);
			//printf("the children states: \n");
			//st.printState();

			// check now if on closed list. -- dont think this is working...
			// guess i dont need this here cause i already run through this list at the begiging.
			// this is for the veector closed list.
			for (int i = 0; i < closedList.size(); i++) {
				if (closedList[i] == st) {
					//printf("already on closed.\n");
					isOnClosed = true;
					break;
				}
			}

			//isOnClosed = game.isOnClosed(st); // Using the game board as a closed list.

			// Useing a set as a closed list.
			//isOnClosed = (closedList.find(st) != closedList.end());
			if (isOnClosed) {
				continue;
			}
			//if (std::find(closedList.begin(), closedList.end(), st) != closedList.end()) {
			//	// then closed list contains the guy.
			//	printf("The state is already closed.\n");
			//	continue;
			//}

			// should multiply by a weight.
			// now everytime need to loop through each heuristic.
			// should pass the envi into the heuristic? or at least the goal state?
			// would kinda need for the grid world....
			float h = 0;
			float sH = 0;
			for (int i = 0; i < numH; i++) {
				h = heurs[i]->h(st, goal) * heuristicWeight;
				if (sH < h) {
					sH = h;
				}
			}
			//float sH = heuristic(game, st) * heuristicWeight;
			// do i check if the current state is on closed?
			// need to check if the this child state is already on open, and if need to update.
			//inAStarStruct<S, O> ast = { st, (current.gcost + 1 + sH), sH, current.gcost + 1, s, expansions - 1 };
			float newGcost = current.gcost + game.getMovementCost(s);
			inAStarStruct<S, O> ast( st, (newGcost + sH), sH, newGcost, s, expansions - 1, -1 );
			game.updateOpen(st);
			// need to check if the state is already on open.., want that operation to be quick.
			pqueue.push(ast);
		}
	}

	if (printPath) {
		for (S s : path) {
			//s.printState();
			game.updatePath(s);
		}
		//printf("Optimal moves to the goal: %u\n", path.size());
	}
	// closed list is 1 longer than nodes expanded because of the goal.
	//printf("Length of closed list: %u\n", closedList.size());
	//printf("Nodes expanded : %d\n", count);
	//printf("Optimal moves to the goal: %u\n", path.size());

	//getchar();
	//exit(1);
}


template <class E, class S, class O>
uint64_t AStar<E, S, O>::GetNodesExpanded()
{
	return expansions;
}

template<class E, class S, class O>
void AStar<E, S, O>::setHeuristicWeight(const float& w)
{
	heuristicWeight = w;
}

