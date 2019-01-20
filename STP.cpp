#include "STP.h"



STP::STP()
{
	// setup the goal stuff;
	// could just make the goal thing global.
	int m[2] = { 0,0 };
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


STP::~STP()
{
}

void STP::GetSuccessors(STPState & nodeID, std::vector<STPState>& actions)
{
	actions.clear();
	// for this, find the blank in the STPState, then go from there.
	// blankR+1, blankR-1, with blankC and then blankC+1, blankC-1 with blankR
	// then need to actually do the swap.
	// maybe just try catch all of them.
	//printf("The nodes blanks: (%u, %u)\n", nodeID.blankRow, nodeID.blankCol);
	// just to blankR+1 and blankC
	// moving down.
	if(nodeID.blankRow < ROWS - 1){
		STPState state(nodeID);
		state.swapPositions(nodeID.blankRow, nodeID.blankCol, nodeID.blankRow + 1, nodeID.blankCol);
		actions.push_back(state);
	}
	
	// blankR - 1 and blankC
	if(nodeID.blankRow - 1 >= 0){
		STPState state(nodeID);
		state.swapPositions(nodeID.blankRow, nodeID.blankCol, nodeID.blankRow - 1, nodeID.blankCol);
		actions.push_back(state);
	}
	
	// blankR and blankC - 1
	if(nodeID.blankCol - 1 >= 0) {
		STPState state(nodeID);
		state.swapPositions(nodeID.blankRow, nodeID.blankCol, nodeID.blankRow, nodeID.blankCol - 1);
		actions.push_back(state);
	}
	
	// blankR and blankC + 1
	if(nodeID.blankCol + 1 < COLS) {
		STPState state(nodeID);
		state.swapPositions(nodeID.blankRow, nodeID.blankCol, nodeID.blankRow, nodeID.blankCol + 1);
		actions.push_back(state);
	}
}

void STP::GetOperators(STPState & nodeID, std::vector<STPSlideDir>& operators)
{
	operators.clear();
	// get operators, just do almost the same thing except just check if the direction is valid.
	if (nodeID.blankRow < ROWS - 1) {
		operators.push_back(DOWN);
	}
	if (nodeID.blankRow > 0) {
		operators.push_back(UP);
	}
	if (nodeID.blankCol < COLS - 1) {
		operators.push_back(RIGHT);
	}
	if (nodeID.blankCol > 0) {
		operators.push_back(LEFT);
	}
}


void STP::ApplyOperator(STPState & s, STPSlideDir o)
{
	// I added the try catches for when i was doing user input.
	if (o == UP) {
		// then swap blankRow - 1 and blankRow	
			s.swapPositions(s.blankRow, s.blankCol, s.blankRow - 1, s.blankCol);
			
	}
	else if (o == DOWN) {
			s.swapPositions(s.blankRow, s.blankCol, s.blankRow + 1, s.blankCol);
		
	}
	else if (o == LEFT) {
			s.swapPositions(s.blankRow, s.blankCol, s.blankRow, s.blankCol - 1);

	}
	else if (o == RIGHT) {
			s.swapPositions(s.blankRow, s.blankCol, s.blankRow, s.blankCol + 1);
	}
	s.previousDir = o;
}


// assuming this is just do the opposite of the slide direction.
void STP::UndoOperator(STPState & s, STPSlideDir o)
{
	if (o == UP) {
		ApplyOperator(s, DOWN);
	}
	else if (o == DOWN) {
		ApplyOperator(s, UP);
	}
	else if (o == LEFT) {
		ApplyOperator(s, RIGHT);
	}
	else if (o == RIGHT) {
		ApplyOperator(s, LEFT);
	}
}
//
//int STP::scoreState(STPState & s)
//{
//	// calculate num moves for each num to get to its goal.
//	// Need to know the goal location for each number.
//	// how do without hard code in the numbers
//	// would be nice to have a map from number to goal (x,y)
//	// so could have a map to an array[2];
//	// now, just loop through the board and easy.
//	int score = 0;
//	for (int row = 0; row < s.ROWS; row++) {
//		for (int col = 0; col < s.COLS; col++) {
//			// score will = abs(dx) + abs(dy)
//			// so dy = row - map[#].y
//			int dx = abs(col - goals[s.board[row][col]].x);
//			int dy = abs(row - goals[s.board[row][col]].y);
//			score += (dx + dy);
//		}
//	}
//	return score;
//}

STPSlideDir STP::getOppositeDir(STPSlideDir dir)
{
	if (dir == UP) {
		return DOWN;
	}
	else if (dir == DOWN) {
		return UP;
	}
	else if (dir == LEFT) {
		return RIGHT;
	}
	else if(dir == RIGHT) {
		return LEFT;
	}
	else {
		return NOTHING;
	}
}

void STP::printWorldStateSpecific(STPState start, STPState goal)
{
}
