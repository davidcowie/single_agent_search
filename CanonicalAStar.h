#pragma once

#include <functional>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include "AStarStruct.h"
//#include "AStarOpenList.h"
#include "OpenList.h"
#include "Heuristic.h"
//#include "MaxHeuristic.h"

// HAD an issue with the == operator. how it was defined as apart of the STPState class vs outside of it. FIXED.


/*
Canonical Astar here is specific for grids.
*/

// Enviroment, State, Operator
template <class E, class S, class O>
class CanonicalAStar
{
public:
	CanonicalAStar();
	~CanonicalAStar();
	//void GetPath(E & game, S start, S & goal, std::function<float(E&, S&)> heuristic, int& count, bool printPath);
	void GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numHeurs, bool printPath, O forbiddenOp);
	void GetPath3(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp);
	void JumpPointSearch(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp);
	void showCanonicalForAPoint(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp);
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
CanonicalAStar<E, S, O>::CanonicalAStar()
{
	//printf("%d\n", a);
	heuristicWeight = 1;
	stopAtGoal = true;
}

template <class E, class S, class O>
CanonicalAStar<E, S, O>::~CanonicalAStar()
{
}

// so now maybe instead of passing 1 heuristic, need to pass in a list of them.
template <class E, class S, class O>
void CanonicalAStar<E, S, O>::GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numH, bool printPath, O forbiddenOp)
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
			inAStarStruct<S, O> ast(st, (newGCost + sH), sH, newGCost, s, expansions - 1, -1);
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
void CanonicalAStar<E, S, O>::GetPath3(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp)
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

	float startH = heuristic->h(start, goal) * heuristicWeight;

	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	//inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	inAStarStruct<S, O> startState(start, startH, startH, 0, forbiddenOp, -1, -1);
	//float startG = game.getMovementCost(start, forbiddenOp); // should be zero cause the movement should be the nothing operation.
	//inAStarStruct<S, O> startState(start, startH + startG, startH, startG, forbiddenOp, -1, -1);
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
		// here actually should check if the current state is a jump point, and if it is, then get regular operators, kinda
		// or actually just say the direction that pass in is like combo of previous direction and which side block is on.
		O dir = game.isJumpPoint(current.state, current.dirToParent);
		game.GetCanonicalOperators(current.state,dir, sucs);
		//printf("state possible operators: ");
		//game.printOperators(sucs);
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
			// also dont think ill be generating anything that is on closed...
			// but also that might just be true in general but maybe some cases when that isnt.
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
			float newGCost = current.gcost + game.getMovementCost(st, s);
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

template<class E, class S, class O>
void CanonicalAStar<E, S, O>::JumpPointSearch(E & game, S start, S & goal, Heuristic<S>* heuristic, bool printPath, O forbiddenOp)
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

	float startH = heuristic->h(start, goal) * heuristicWeight;

	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	//inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	inAStarStruct<S, O> startState(start, startH, startH, 0, forbiddenOp, -1, -1);
	openlist.insert(startState);

	std::vector<S> path;
	std::vector<S> success;
	std::vector<O> sucs;
	std::vector<inAStarStruct<S, O>> parents;

	// internal jump expansion open list.
	//std::deque<inAStarStruct<S, O>> inJumpOpenList;
	std::vector<inAStarStruct<S, O>> inJumpOpenList; // this will be fine as long as just add and remove from the end.
	// also what is gcost of a jump point... is it regular gcost or only include the jumps?
	// however the heuristic doesn't matter while expanding.
	std::vector<O> jumpSucs;

	bool found = false;
	bool isOnClosed = false;
	int parentCounter = 0;
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
			//printf("FOUND THE GOAL!!!!!!!\n");
			found = true;
			// can loop over current to find the path;
			//int curIndex = expansions;
			int curIndex = parentCounter;
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
		parentCounter++;
		//printf("expansions: %llu, parentCounter: %d\n", expansions, parentCounter);
		game.GetCanonicalOperators(current.state, current.dirToParent, sucs);
		/*if(expansions == 486)
		printf("Got operators. size ops: %u\n", sucs.size());*/
		int prIndex = parentCounter;
		for (O s : sucs) {
			/*if (expansions == 486) {
			printf("operator: ");
			game.printOperator(s);
			printf("\n");
			}*/
			/*printf("operator: ");
			game.printOperator(s);
			printf("\n");
			getchar();*/
			if (s == game.getOppositeDir(current.dirToParent)) {
				continue;
			}
			S st(current.state);
			game.ApplyOperator(st, s);
			// then continuously get the successors of this state until hit a jump point, the goal, or a wall(discard).
			// check if it is a jump point
			// its a jump point if 
			// if going left, then if top left or bottom left were blocked, and top and bottom are unblocked.
			// probably would make a jump point node so that can easily set like direction and things like that.
			// think want another vector to hold states to expand, but the order shouldn't matter.
			// basically starting another search, so need another open list.
			float jnewGCost = current.gcost + game.getMovementCost(s);
			//inAStarStruct<S, O> jjjast(st,0, 0, jnewGCost, s, expansions - 1, -1);
			inAStarStruct<S, O> jjjast(st, 0, 0, jnewGCost, s, prIndex - 1, -1);
			inJumpOpenList.push_back(jjjast);
			while (true) {
				// basically run until the state st is blocked.. no operators..
				// or it is a jump point.
				// if direction returned is the same as what was passed in.
				// first get the opera // well jump points can only come from cardinal actions...
				// so check if the action
				// first get operators, if there are none, then blocked, so stop with that direction,
				// then check if the state is a jump point, if it is add that to open, and stop.
				// check if the state is the goal, if it is, add that to open and stop.
				// otherwise, 
				if (inJumpOpenList.empty()) {
					break;
				}
				inAStarStruct<S, O> jast = inJumpOpenList.back();
				// could put this on closed...
				//printf("Jump current state: ");
				//jast.state.printState();
				inJumpOpenList.pop_back();
				parentCounter++;
				parents.push_back(jast);
				if (jast.state == goal) {
					//printf("goal Something added to open.\n");
					// then its a jump point. add to open and stop.
					float sH = 0;
					if (heuristicWeight != 0) {
						sH = heuristic->h(jast.state, goal) * heuristicWeight;
					}
					jast.hcost = sH;
					jast.fcost = jast.gcost + jast.hcost;
					openlist.insert(jast);
					game.updateOpen(jast.state);
					continue;
					//break;
				}
				O jdir = game.isJumpPoint(jast.state, jast.dirToParent);
				if (jdir != jast.dirToParent) {
					// then its a jump point. add to open and stop.
					//printf("jump point added to open.\n");
					float sH = 0;
					if (heuristicWeight != 0) {
						sH = heuristic->h(jast.state, goal) * heuristicWeight;
					}
					jast.hcost = sH;
					jast.fcost = jast.gcost + jast.hcost;
					jast.dirToParent = jdir;
					openlist.insert(jast);
					game.updateOpen(jast.state);
					//parentCounter--;
					continue;
					//break;
				}
				// then get operators.
				game.GetCanonicalOperators(jast.state, jast.dirToParent, jumpSucs);
				// then apply each operator, and just add each state to the end of the openlist.
				for (auto js : jumpSucs) {
					// need to apply it then append
					S jst(jast.state);
					game.ApplyOperator(jst, js);
					if (openlist.isOnClosed(jst)) {
						continue;
					}
					float newGCost = jast.gcost + game.getMovementCost(js);
					//inAStarStruct<S, O> jjast(jst, 0, 0, newGCost, js, expansions - 1, -1);
					inAStarStruct<S, O> jjast(jst, 0, 0, newGCost, js, parentCounter - 1, -1);
					inJumpOpenList.push_back(jjast);
				}
			}

			////printf("Applied\n");
			//if (openlist.isOnClosed(st)) {
			//	//printf(" On Closed: ");
			//	//st.printState();
			//	continue;
			//}
			///*if (expansions == 486) {
			//printf("pre heuristic\n");
			//st.printState();
			//}*/
			//float sH = 0;
			//if (heuristicWeight != 0) {
			//	sH = heuristic->h(st, goal) * heuristicWeight;
			//}
			///*if (expansions == 486) {
			//printf("post heuristic\n");
			//st.printState();
			//}*/
			//float newGCost = current.gcost + game.getMovementCost(s);
			//inAStarStruct<S, O> ast(st, (newGCost + sH), sH, newGCost, s, expansions - 1, -1);
			/*if (expansions == 486)
			printf("post create struct.\n");*/
			//game.updateOpen(st);

			/*if (expansions == 486)
			openlist.printOpenList();*/

			//openlist.insert(ast);
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

template<class E, class S, class O>
void CanonicalAStar<E, S, O>::showCanonicalForAPoint(E & game, S start, S & goal, Heuristic<S> *heuristic, bool printPath, O forbiddenOp)
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

	float startH = heuristic->h(start, goal) * heuristicWeight;

	// want this to hold NOTHING as the direction, but that value is specific for every enum.... so should I not use and enum for the actions anymore?
	inAStarStruct<S, O> startState = { start, startH, startH, 0, forbiddenOp };
	//inAStarStruct<S, O> startState(start, 0, 0, 0, forbiddenOp, -1, -1);
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
		game.GetCanonicalOperators(current.state,current.dirToParent, sucs);
		// maybe a canonical getOperators which would take a state and a previous operator. -- that way could keep this algorithm generic.

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
			float newGCost = current.gcost + game.getMovementCost(s);
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
uint64_t CanonicalAStar<E, S, O>::GetNodesExpanded()
{
	return expansions;
}

template<class E, class S, class O>
void CanonicalAStar<E, S, O>::setHeuristicWeight(const float& w)
{
	heuristicWeight = w;
}

