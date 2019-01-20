#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <functional>
#include "AStarStruct.h"
#include <queue>
//#include "STPState.h"


/*
OpenList.h
This is the open list for the AStar search.
It uses a vector as the priority queue which is a minheap. This allows constant time removal from the top(which is the state with the lowest f cost).
This in conjunction with the unordered_map allows for constant time lookups to update values on the open list.
I hash the state to use it as the key in the map, this gets the astarstruct for that state. The astarStruct has a member variable for the index into the priority queue of that state.
That is what allows that constant lookup.
When inserting a new State, it checks to see if that state is already in the priority queue, if it isn't, it just adds it to the end of the vector and checks the heap property back up the vector.
If the state is already in the vector, then I get the index of it from the unordered_map, and then set that index in the vector to the astarStruct with lower fcost, if it changes then I veryify the heap property is perserved.
The insert does not do any checking if the state is on the closed list. That is the resposibility of the caller.
If the index from the astarStruct that is mapped from the unordered_map is -1, then that state is on the closed list.

unordered_map: State -> index(int)
vector<aStarStructs> = openlist.
*/
template<typename S, typename O>
class OpenList {
public:
	OpenList() {
		// this way have room to pass in different comparision operators.
		cmp = [](inAStarStruct<S, O> left, inAStarStruct<S, O> right) {
			if (left.fcost == right.fcost) {
				//return left.gcost > right.gcost;
				return left.gcost < right.gcost;
			}
			return left.fcost < right.fcost;
		};
	}
	// Operations.
	// insert --> sort as insert. (sort by low f, and high g) (also should first check if the given state is already on the openlist, if so then just update it and resort.
	// top --> just get the first element.(actually should be at the end, because removing from the end is faster.)
	// Need to be able to check if on open already and if need to update the entry.
	// Need to check if it is on closed.
	void insert(inAStarStruct<S,O> state);
	inAStarStruct<S, O> top();
	bool empty() { return openlist.size() == 0; }
	bool isOnClosed(const S& s);
	void putOnClosed(const S& s);
	float getGCost(const S& s) {
		return closedList[s].gcost;
	}

	// could have a get g cost and can use the map to look that up.

	void printOpenList();
	void reset() {
		openlist.clear();
		map.clear();
		closedList.clear();
	}
private:
	std::vector<inAStarStruct<S, O>> openlist;
	// if made this a heap, then 
	// want parent, left, and right functions.
	int parent(int i) { return ((i - 1) / 2); }
	int left(int i) {
		return (2 * i + 1);
	}
	int right(int i) { return (2 * i + 2); }
	void minHeapify(int i);
	// extract min()
	//insert, and delete. (dont really need delete cause only removing the root node.
	// will have to be able to update 
	// decreaseKey(int index, NEWVAL)
	// will insert at insert.
	// extractmin will be top

	//std::unordered_map<S, inAStarStruct<S, O>> map;
	std::unordered_map<S, int> map;
	std::unordered_map <S, inAStarStruct<S,O>> closedList;
	//auto cmp; 
	//	THIS MIGHT HAVE BEEN SLOWER THAN JUST CREATING IT LOCALLY EVERYTIME.....
	std::function<bool(inAStarStruct<S, O>, inAStarStruct<S, O>)> cmp;
	//std::vector<S> closedlist;
};

/*
This function is ugly!!!!!
Just keeping the ideas and notes from previous iterations.
*/
template<typename S, typename O>
void OpenList<S, O>::insert(inAStarStruct<S, O> state)
{
	bool updated = false;
	// map insert and find.
	//printf("INSERTING!!!\n");
	if (map.find(state.state) == map.end()) {
		/*if (state.state.curX == 2 && state.state.curY == 5) {
			printf("its inserting\n");
		}*/
		// so for now just use the std::sort and could write my own using insertion sort later.
		//openlist.push_back(state);
		//updated = true;

		// If useing it as a heap...
		// first put it on the end. then check if need to restore the heap property.
		openlist.push_back(state);
		// check while not at root and the parent is larger than the new node.
		int i = openlist.size() - 1;
		map[openlist[i].state] = i;
		while (i != 0 && cmp(openlist[i], openlist[parent(i)])) {
			// swap the two 
			// and set i to the parent obviously.
			inAStarStruct<S, O> tmp = openlist[parent(i)];
			openlist[parent(i)] = openlist[i];
			openlist[i] = tmp;

			// update the map index.
			map[openlist[parent(i)].state] = parent(i);
			map[openlist[i].state] = i;

			i = parent(i);
		}
	}
	else {

		//printf("OPLIST::Its already here. updating.\n");
		// perhaps it was put on closed then used again??
		int index = map[state.state];
		//printf("Current index: %d, current openlist size: %u\n", index, openlist.size());
		//printf("Unorderedmap index of state: %d\n", index);
		//state.state
		//std::cout << astruct;
		//std::cout << openlist[index] << "\n";
		// //go get that index and compare values.

		if (openlist[index].fcost > state.fcost) {
			// then replace info,
			// guess dont need to do this..
			//map[state.state] = state;

			openlist[index] = state;
			// NEED TO ACTUALLY SET THE OPEN LIST PART!!
			// MIN HEAP PART!!
			// here decreasing that key.
			// just set the thing to the new value, 
			// then while the heap property isnt there
			// so dont think this part is working...
			int i = index;
			while (i != 0 && cmp(openlist[i], openlist[parent(i)])) {
				inAStarStruct<S, O> tmp = openlist[parent(i)];
				openlist[parent(i)] = openlist[i];
				openlist[i] = tmp;
				map[openlist[parent(i)].state] = parent(i);
				map[openlist[i].state] = i;

				i = parent(i);
			}

			//printf("OPENLIST:: Made a change in open list.\n");
		} // maybe also then check to tie break on g cost here.
	}
}

template<typename S, typename O>
inAStarStruct<S, O> OpenList<S, O>::top()
{
	// can just return the back
	/*inAStarStruct<S, O> state = openlist.at(openlist.size() - 1);
	openlist.pop_back();*/

	// in a heap, swap the root and the last element. then pop the back, then heapify.
	if (openlist.size() == 1) {
		inAStarStruct<S, O> state = openlist.at(openlist.size() - 1);
		openlist.pop_back();
		return state;
	}
	inAStarStruct<S, O> state = openlist.at(0);
	openlist[0] = openlist[openlist.size() - 1];
	openlist.pop_back();
	// then heapify.
	minHeapify(0);
	
	// maybe put on closed here just to see.
	//map[state.state].listIndex = -1;
	// here should map the state to a closed map.
	map[state.state] = -1;

	closedList[state.state] = state;

	return state;
}

template<typename S, typename O>
bool OpenList<S, O>::isOnClosed(const S & s)
{
	if (map.find(s) == map.end()) {
		return false;
	}
	else {
		//return map[s].listIndex == -1;
		return map[s] == -1;
	}

	/*for (int i = 0; i < closedlist.size(); i++) {
		if (closedlist[i] == s) {
			return true;
		}
	}
	return false;*/
}

template<typename S, typename O>
inline void OpenList<S, O>::putOnClosed(const S & s)
{
	//map[s].listIndex = -1;
	map[s] = -1;
	// once have it on closed, maybe put it on another unordered map?
	//closedlist.push_back(s);
}

template<typename S, typename O>
inline void OpenList<S, O>::printOpenList()
{
	for (auto s : openlist) {
		//std::cout << s << ", ";
		std::cout << "Fcost: " << s.fcost << ", hcost: " << s.hcost << ", gcost: " << s.gcost << "| ";
	}
	printf("\n");
}

template<typename S, typename O>
void OpenList<S, O>::minHeapify(int i)
{
	// get the left and right child.
	// then take the smaller of the two, swap those
	// then start again from the smaller index.
	int lefty = left(i);
	int righty = right(i);
	int small = i;
	if (lefty < openlist.size() && cmp(openlist[lefty], openlist[i])) {
		small = lefty;
	}
	if (righty < openlist.size() && cmp(openlist[righty], openlist[small])) {
		small = righty;
	}
	if (small != i) {
		// then swap and recurse.
		inAStarStruct<S, O> tmp = openlist[small];
		openlist[small] = openlist[i];
		openlist[i] = tmp;

		// fairly sure this is the correct way..
		map[openlist[small].state] = small;
		map[openlist[i].state] = i;

		minHeapify(small);
	}
}


//template<typename S, typename O>
//void swap(A)