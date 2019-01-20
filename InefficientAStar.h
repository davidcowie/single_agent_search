#pragma once

#include "STP.h"
#include "Heuristic.h"
#include <functional>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include "AStarStruct.h"


// Enviroment, State, Operator
template <typename E, typename S, typename O>
class InefficientAStar
{
public:
	InefficientAStar();
	~InefficientAStar();
	//void GetPath(E & game, S start, S & goal, std::function<float(E&, S&)> heuristic, int& count, bool printPath);
	//void GetPath(E & game, S start, S & goal, Heuristic** heurs, int numHeurs, int& count, bool printPath, O forbiddenOp);
	void GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numHeurs, bool printPath, O forbiddenOp);
	uint64_t GetNodesExpanded();
	void setHeuristicWeight(const float& w);
	std::vector<O> getDirections();
private:
	uint64_t expansions;
	float heuristicWeight;
	std::vector<O> opPath;
};

template <typename E, typename S, typename O>
InefficientAStar<E, S, O>::InefficientAStar()
{
	
	heuristicWeight = 1;
}

template <typename E, typename S, typename O>
InefficientAStar<E, S, O>::~InefficientAStar()
{
}

// so now maybe instead of passing 1 heuristic, need to pass in a list of them.
template <typename E, typename S, typename O>
//void InefficientAStar<E, S, O>::GetPath(E & game, S start, S & goal, std::function<float(E&, S&)> heuristic, int& count, bool printPath)
void InefficientAStar<E, S, O>::GetPath(E & game, S start, S & goal, Heuristic<S>** heurs, int numH, bool printPath, O forbiddenOp)
{
	expansions = 0;
	opPath.clear();

	std::vector<inAStarStruct<S, O>> openlist;
	std::vector<S> closedList;

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
	openlist.push_back(startState);

	std::vector<S> path;
	std::vector<O> sucs;
	std::vector<inAStarStruct<S, O>> parents;
	bool found = false;
	bool isOnClosed = false;
	// 1 for on open, 2 for on closed.
	// s for current.
	while(!openlist.empty()){
		//getchar();
		isOnClosed = false;

		// get the top one, using pop
		// using a vector, loop over it and pick out the smallest f cost.
		int minIndex = 0;
		inAStarStruct<S, O> current = openlist[0];
		for (int i = 1; i < openlist.size(); i++) {
			if (openlist[i].fcost == current.fcost) {
				if (openlist[i].gcost < current.gcost) {
					current = openlist[i];
					minIndex = i;
				}
			}
			else if (openlist[i].fcost < current.fcost) {
				current = openlist[i];
				minIndex = i;
			}
		}
		// remove from open.
		openlist.erase(openlist.begin() + minIndex);

		//inAStarStruct<S,O> current = pqueue.top();
		//printf("current node:\n");
		//current.state.printState();
		//std::cout << current;
		//game.printWorldStateSpecific(current.state, goal);

		parents.push_back(current);
		// put on closed list.
		
		game.updateClosed(current.state);
		
		closedList.push_back(current.state);
		
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
				opPath.push_back(ast.dirToParent);
			}
			break;
		}
		expansions++;

		game.GetOperators(current.state, sucs);

		for (O s : sucs) {
			isOnClosed = false;
			// have to make a copy and then add it
			if (s == game.getOppositeDir(current.dirToParent)) {
				continue;
			}
			S st(current.state);
			game.ApplyOperator(st, s);

			// check now if on closed list.
			for (int i = 0; i < closedList.size(); i++) {
				if (closedList[i] == st) {
					isOnClosed = true;
					break;
				}
			}
			if (isOnClosed) {
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
			//inAStarStruct<S, O> ast(st, (current.gcost + 1 + sH), sH, current.gcost + 1, s, expansions - 1, -1 );
			float newGCost = current.gcost + game.getMovementCost(s);
			inAStarStruct<S, O> ast(st, (newGCost + sH), sH, newGCost, s, expansions - 1, -1);

			game.updateOpen(st);

			// need to check if it is already on open.
			bool updatedOpen = false;
			for (int i = 0; i < openlist.size(); i++) {
				if (openlist[i].state == st) {
					// then it is on, so update for the lower fcost and parent.
					if (openlist[i].fcost > ast.fcost) {
						openlist[i] = ast;
					}
					else if (openlist[i].fcost == ast.fcost) {
						if (openlist[i].gcost < ast.gcost) {
							openlist[i] = ast;
							
						}
					}
					updatedOpen = true;
					break;
				}
			}
			if (!updatedOpen) {
				openlist.push_back(ast);
			}
		}
	}

	if (printPath) {
		for (S s : path) {
			//s.printState();
			game.updatePath(s);
		}
		//printf("Optimal moves to the goal: %u\n", path.size());
	}

	//printf("Nodes expanded : %d\n", expansions);
	//printf("Optimal moves to the goal: %u\n", path.size());
	//printf("optimal ops to goal: %u\n", opPath.size());

	//getchar();
	//exit(1);
}


template <typename E, typename S, typename O>
uint64_t InefficientAStar<E, S, O>::GetNodesExpanded()
{
	return expansions;
}

template<typename E, typename S, typename O>
inline void InefficientAStar<E, S, O>::setHeuristicWeight(const float& w)
{
	heuristicWeight = w;
}

template<typename E, typename S, typename O>
std::vector<O> InefficientAStar<E, S, O>::getDirections()
{
	// yes a little unsafe but for this simple purpose, this works.
	// like cant call getDirections twice without rerunning the search.
	std::reverse(opPath.begin(), opPath.end());
	return opPath;
}

