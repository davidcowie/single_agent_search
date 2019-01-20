#pragma once
/*
This is the AstarStruct that is used during the Astar searches.
It holds the state, all the costs, parent index, direction to the parent, index into the priority queue.
*/
template<typename S, typename O>
struct inAStarStruct {
	inAStarStruct() {};
	inAStarStruct(S s, float f, float h, float g, O dir, int par, int li) : state(s), fcost(f), hcost(h), gcost(g), dirToParent(dir), parentIndex(par), listIndex(li) {}

	inAStarStruct(const inAStarStruct& instruct) {
		state = instruct.state;
		fcost = instruct.fcost;
		hcost = instruct.hcost;
		gcost = instruct.gcost;
		dirToParent = instruct.dirToParent;
		parentIndex = instruct.parentIndex;
		listIndex = instruct.listIndex;
	};
	S state;
	float fcost;
	float hcost;
	float gcost;
	O dirToParent; // = NOTHING;
	int parentIndex;
	int listIndex;
};

// SHOULD I HAVE THIS???
// ALSO MIGHT CHANGE ALL SIGNS IF need reverse order.
//template<typename S, typename O>
//bool operator<(const inAStarStruct<S, O>& a, const inAStarStruct<S, O>& b) {
//	// when is a less than b?
//	if (a.fcost == b.fcost) {
//		// then compare on gcost.
//		if (a.gcost < b.gcost) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	else {
//		if (a.fcost > b.fcost) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//}
//
//template<typename S, typename O>
//bool operator>(const inAStarStruct<S, O>& a, const inAStarStruct<S, O>& b) {
//	return !(a < b);
//}

// Output the aStarStruct.
template<typename S, typename O>
std::ostream& operator<<(std::ostream& out, const inAStarStruct<S, O>& s) {
	// and why not print out the costs
	//
	//out << "----Printing aStartState ----- \n";
	out << "Fcost: " << s.fcost << ", hcost: " << s.hcost << ", gcost: " << s.gcost << "\n";
	//s.state.printState();
	/*for (int y = 0; y < ROWS; y++)
	{
	for (int x = 0; x < COLS; x++)
	{
	if (s.state.board[y][x] < 10)
	out << s.state.board[y][x] << "  ";
	else
	out << s.state.board[y][x] << " ";
	}
	out << "\n";
	}*/
	return out;
}
