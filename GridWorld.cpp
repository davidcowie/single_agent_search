#include "GridWorld.h"

/*
WHAT IS DIFFERENCE BTWEEN USING THIS OPERATOR BELOW WHICH ISNT APART OF THE CLASS
AND USING ONE THAT IS IN THE CLASS?????
*/

bool operator==(const GridWorldState & g1, const GridWorldState & g2)
{
	// really should only be comparing. the GridWorld should hold the map, because all that changes is current location....
	// so thinking state should only hold current X and Y.
	return ((g1.curX == g2.curX) && (g1.curY == g2.curY));
	//return false;
}

GridWorldState::GridWorldState() {
	curX = -1;
	curY = -1;
}

GridWorldState::GridWorldState(int x, int y)
{
	curX = x;
	curY = y;
}

void GridWorldState::printState()
{
	printf("STATE:: CurX: %d, CurY: %d\n", curX, curY);
}

GridWorld::GridWorld(std::string filemappath)
{
	 // Does the map need to go onto the heap because I dont know the size at compile time?
	canGoDiagonal = true; // could pass something in for this.
	diagEdgeCost = sqrt(2);
	// going to try and use the maps from the files.
	// first line isnt important
	// second line is height
	// third line is width.
	// 4th line, really unimportant.
	// then get the actual map.
	//board = new int*[WORLDHEIGHT]; // [WORLDWIDTH];
	//for (int i = 0; i < WORLDHEIGHT; i++) {
	//	board[i] = new int[WORLDWIDTH];
	//}
	std::string line;
	std::ifstream mapFile(filemappath);
	if (mapFile.is_open()) {
		std::getline(mapFile, line);
		std::getline(mapFile, line); // this is the height.i
		std::vector<std::string> tokens;

		std::istringstream iss = std::istringstream(line);
		//std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::ostream_iterator<std::string>(std::cout, "\n")); // This line also causes a linker err.
		std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter(tokens)); // This line also causes a linker err.
		std::stringstream toNumber(tokens[1]);
		int height;
		toNumber >> WORLDHEIGHT;
		printf("Height: %d\n", WORLDHEIGHT);
		std::istringstream stream = std::istringstream(line);
		//int height;
		//std::string eh;
		//stream >> eh; // THIS THROWS an internal error in the compiler. IMAGE::BuildImage internal error.
		//stream >> height;
		//std::cout << height << "\n";
		std::getline(mapFile, line); // width.
		iss = std::istringstream(line);
		tokens.clear();
		std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter(tokens)); // This line also causes a linker err.
		toNumber = std::stringstream(tokens[1]);
		int width;
		toNumber >> WORLDWIDTH;
		printf("world width: %d\n", WORLDWIDTH);
		grid.resize(WORLDHEIGHT*WORLDWIDTH);
		printingGrid.resize(WORLDHEIGHT*WORLDWIDTH);
		//board = new int*[WORLDHEIGHT]; // [WORLDWIDTH];
		//for (int i = 0; i < WORLDHEIGHT; i++) {
		//	board[i] = new int[WORLDWIDTH];
		//}
		std::getline(mapFile, line);
		int r = 0;
		std::string unoccupidedString = ".";
		while (std::getline(mapFile, line)) {
			//std::istringstream iss(line);
			// actually is i get a line, i know the width, so i can just loop over it and index the string.
			for (int i = 0; i < WORLDWIDTH; i++) {
				//std::cout << line[i];
				// here would have the different things that they map to.
				if (line[i] == '.' ) {
					//board[r][i] = 1;
					grid[getIndex({ i,r })] = 1;
					printingGrid[getIndex({ i,r })] = 1;
				}
				else {
					//board[r][i] = -1;
					grid[getIndex({ i, r })] = -1;
					printingGrid[getIndex({ i, r })] = -1;
				}
			}
			r++;
			//printf("\n");
		}

		mapFile.close();
	}
	else {
		printf("Error oppening file.\n");
		getchar();
		exit(2);
	}
	//getchar();

	// want to try adding edge cost to states touching obsticles.. thinking just making those worth 2..
	bool wantRoundEdges = false;
	if (wantRoundEdges) {
		for (int row = 0; row < WORLDHEIGHT; row++) {
			for (int col = 0; col < WORLDWIDTH; col++) {
				// check each state to see if it is touching an edge.
				// so need to check every 8 neighbors, thinking just going to use isvalid cause like
				// if it is at the border of the map with no edges, that can be more expensive too.
				if (isValid({ col, row }) && (!isValid({ col - 1, row }) || !isValid({ col + 1, row }) || !isValid({ col, row - 1 }) || !isValid({ col, row + 1 }) || !isValid({ col - 1, row + 1 }) || !isValid({ col - 1, row - 1 }) || !isValid({ col + 1, row + 1 }) || !isValid({ col + 1, row - 1 }))) {
					grid[getIndex({ col, row })] = 2;
				}
			}
		}
	}

	// This was an initial sample test board i made.
	//for (int row = 0; row < WORLDHEIGHT; row++) {
	//	for (int col = 0; col < WORLDWIDTH; col++) {
	//		if (row == 0 || row == WORLDHEIGHT - 1) {
	//			board[row][col] = -1;
	//		}
	//		else if (col == 0 || col == WORLDWIDTH - 1) {
	//			board[row][col] = -1;
	//		}
	//		else {
	//			// here not on the edge.
	//			// can fill in manually some obsticles. 
	//			board[row][col] = 0;
	//		}
	//	}
	//}
	//board[6][3] = -1;
	//board[6][4] = -1;
	//board[6][5] = -1;
	//board[5][5] = -1;
	//board[4][5] = -1;
	//board[3][5] = -1;
	//board[2][5] = -1;
	//board[6][2] = -1;
	//board[6][1] = -1;
}

GridWorld::~GridWorld()
{
	// Is this destructor wrong?...
	/*for (int i = 0; i < WORLDHEIGHT; i++) {
		delete board[i];
	}
	delete board;*/
}

void GridWorld::GetSuccessors(GridWorldState & s, std::vector<GridWorldState>& states)
{
}

void GridWorld::GetOperators(GridWorldState & s, std::vector<GridWorldMovements>& operators)
{
	operators.clear();
	bool wantPrint = false;
	// just use the current state, check if it is in bounds and if can move there.
	//printWorldStateSpecific(s, s);
	//if (s.curX > 0 && board[s.curY][s.curX - 1] != -1) {
	//	// then ccan go left.
	//	if(wantPrint) printf("can go left, ");
	//	operators.push_back(kgLEFT);
	//}
	//if (s.curY > 0 && board[s.curY - 1][s.curX] != -1) {
	//	if(wantPrint) printf("can go up, ");
	//	operators.push_back(kgUP);
	//}
	//if (s.curX < WORLDWIDTH - 1 && board[s.curY][s.curX + 1] != -1) {
	//	if(wantPrint) printf("can go right, ");
	//	operators.push_back(kgRIGHT);
	//}
	//if (s.curY < WORLDHEIGHT - 1 && board[s.curY + 1][s.curX] != -1) {
	//	if(wantPrint) printf("can go down, ");
	//	operators.push_back(kgDOWN);
	//}

	//// for the diagonal movements.
	//if (canGoDiagonal) {
	//	// upLeft first. -- involves check y and x for bounds, then check that up and left are open.
	//	// would it be faster to set a bool for each direction? or to even loop through the operators currently in there?
	//	// cause here have to check all twice. but it is a cheap operation.
	//	if (s.curY > 0 && s.curX > 0 && board[s.curY][s.curX - 1] != -1 && board[s.curY - 1][s.curX] >= 0 && board[s.curY - 1][s.curX - 1] != -1) {
	//		if (wantPrint) printf("can go upLeft, ");
	//		operators.push_back(kgUPLEFT);
	//	}
	//	if (s.curY > 0 && s.curX < WORLDWIDTH - 1 && board[s.curY][s.curX + 1] != -1 && board[s.curY - 1][s.curX] >= 0 && board[s.curY - 1][s.curX + 1] != -1) {
	//		operators.push_back(kgUPRIGHT);
	//	}
	//	if (s.curY < WORLDHEIGHT - 1 && s.curX > 0 && board[s.curY][s.curX - 1] != -1 && board[s.curY + 1][s.curX] >= 0 && board[s.curY + 1][s.curX - 1] != -1) {
	//		operators.push_back(kgDOWNLEFT);
	//	}
	//	if (s.curY < WORLDHEIGHT - 1 && s.curX < WORLDWIDTH - 1 && board[s.curY][s.curX + 1] != -1 && board[s.curY + 1][s.curX] >= 0 && board[s.curY + 1][s.curX + 1] != -1) {
	//		operators.push_back(kgDOWNRIGHT);
	//	}
	//}



	// new way
	if (isValid({s.curX - 1, s.curY})) {
		// then ccan go left.
		if (wantPrint) printf("can go left, ");
		operators.push_back(kgLEFT);
	}
	
	if(isValid({s.curX, s.curY - 1})){
		if (wantPrint) printf("can go up, ");
		operators.push_back(kgUP);
	}
	if(isValid({s.curX + 1, s.curY})){
	
		if (wantPrint) printf("can go right, ");
		operators.push_back(kgRIGHT);
	}
	if (isValid({ s.curX , s.curY+1 })) {
	
		if (wantPrint) printf("can go down, ");
		operators.push_back(kgDOWN);
	}

	// for the diagonal movements.
	if (canGoDiagonal) {
		// upLeft first. -- involves check y and x for bounds, then check that up and left are open.
		// would it be faster to set a bool for each direction? or to even loop through the operators currently in there?
		// cause here have to check all twice. but it is a cheap operation.
		if (isValid({ s.curX - 1, s.curY }) && isValid({ s.curX - 1, s.curY - 1 }) && isValid({ s.curX , s.curY - 1 })) {
		
			if (wantPrint) printf("can go upLeft, ");
			operators.push_back(kgUPLEFT);
		}
		if (isValid({ s.curX + 1, s.curY }) && isValid({ s.curX + 1, s.curY - 1 }) && isValid({ s.curX , s.curY - 1 })) {
		
			operators.push_back(kgUPRIGHT);
		}
		if (isValid({ s.curX - 1, s.curY }) && isValid({ s.curX - 1, s.curY + 1 }) && isValid({ s.curX , s.curY + 1 })) {
		
			operators.push_back(kgDOWNLEFT);
		}
		if (isValid({ s.curX + 1, s.curY }) && isValid({ s.curX + 1, s.curY + 1 }) && isValid({ s.curX , s.curY + 1 })) {
		
			operators.push_back(kgDOWNRIGHT);
		}
	}

	//printf("done operators\n");
	// can add other directions later.
	// maybe just pass in a bool for if doing octile movements.
}

void GridWorld::GetCanonicalOperators(GridWorldState & s, GridWorldMovements o, std::vector<GridWorldMovements>& operators)
{
	operators.clear();
	bool wantPrint = false;

	// so if the movement, which will be the previous movement, is diagonal, then can go opposite of movement, or cardinal in sameish direction.
	// if cardinal, then only can do same movement.
	// this could be a lot of typing.
	GridWorldState upState(s.curX, s.curY - 1);
	GridWorldState downState(s.curX, s.curY + 1);
	GridWorldState leftState(s.curX - 1, s.curY);
	GridWorldState rightState(s.curX + 1, s.curY);
	// also want diagonals.
	GridWorldState upLeftState(s.curX -1, s.curY - 1);
	GridWorldState downLeftState(s.curX - 1, s.curY + 1);
	GridWorldState upRightState(s.curX + 1, s.curY - 1);
	GridWorldState downRightState(s.curX + 1, s.curY + 1);

	// cardinal movements
	if (o == kgLEFT || o == kgDOWN || o == kgRIGHT || o == kgUP) {
		if (o == kgLEFT) {
			if (isValid(leftState)) {
				operators.push_back(kgLEFT);
			}
		}
		else if (o == kgRIGHT && isValid(rightState)) {
			operators.push_back(kgRIGHT);
		}
		else if (o == kgUP && isValid(upState)) {
			operators.push_back(kgUP);
		}
		else if (o == kgDOWN && isValid(downState)) {
			operators.push_back(kgDOWN);
		}
	}
	else if(o == kgNOTHING) { //can go anywhere. cause this will be the start.
							  // new way
		if (isValid({ s.curX - 1, s.curY })) {
			// then ccan go left.
			if (wantPrint) printf("can go left, ");
			operators.push_back(kgLEFT);
		}

		if (isValid({ s.curX, s.curY - 1 })) {
			if (wantPrint) printf("can go up, ");
			operators.push_back(kgUP);
		}
		if (isValid({ s.curX + 1, s.curY })) {

			if (wantPrint) printf("can go right, ");
			operators.push_back(kgRIGHT);
		}
		if (isValid({ s.curX , s.curY + 1 })) {

			if (wantPrint) printf("can go down, ");
			operators.push_back(kgDOWN);
		}

		// for the diagonal movements.
		if (canGoDiagonal) {
			// upLeft first. -- involves check y and x for bounds, then check that up and left are open.
			// would it be faster to set a bool for each direction? or to even loop through the operators currently in there?
			// cause here have to check all twice. but it is a cheap operation.
			if (isValid({ s.curX - 1, s.curY }) && isValid({ s.curX - 1, s.curY - 1 }) && isValid({ s.curX , s.curY - 1 })) {

				if (wantPrint) printf("can go upLeft, ");
				operators.push_back(kgUPLEFT);
			}
			if (isValid({ s.curX + 1, s.curY }) && isValid({ s.curX + 1, s.curY - 1 }) && isValid({ s.curX , s.curY - 1 })) {

				operators.push_back(kgUPRIGHT);
			}
			if (isValid({ s.curX - 1, s.curY }) && isValid({ s.curX - 1, s.curY + 1 }) && isValid({ s.curX , s.curY + 1 })) {

				operators.push_back(kgDOWNLEFT);
			}
			if (isValid({ s.curX + 1, s.curY }) && isValid({ s.curX + 1, s.curY + 1 }) && isValid({ s.curX , s.curY + 1 })) {

				operators.push_back(kgDOWNRIGHT);
			}
		}
	}
	else { // going idagonal.
		// so for a diagonal action, can continue same diagonal, or like if going UPLEFT, can try UP and LEFT
		// think need a case for each diagonal
		int count = 0;
		switch (o) {
		case kgUPLEFT:
			
			if (isValid(upState)) {
				operators.push_back(kgUP);
				count++;
			}
			if (isValid(leftState)) {
				operators.push_back(kgLEFT);
				count++;
			}
			if (isValid(upLeftState) && count == 2) {
				operators.push_back(kgUPLEFT);
			}
			break;
		case kgDOWNLEFT:
			
			if (isValid(downState)) {
				operators.push_back(kgDOWN);
				count++;
			}
			if (isValid(leftState)) {
				operators.push_back(kgLEFT);
				count++;
			}
			if (count == 2 && isValid(downLeftState)) {
				operators.push_back(kgDOWNLEFT);
			}
			break;
		case kgUPRIGHT:
			if (isValid(upState)) {
				operators.push_back(kgUP);
				count++;
			}
			if (isValid(rightState)) {
				operators.push_back(kgRIGHT);
				count++;
			}
			if (count == 2 && isValid(upRightState)) {
				operators.push_back(kgUPRIGHT);
			}
			break;
		case kgDOWNRIGHT:
			if (isValid(downState)) {
				operators.push_back(kgDOWN);
				count++;
			}
			if (isValid(rightState)) {
				operators.push_back(kgRIGHT);
				count++;
			}
			if (count == 2 && isValid(downRightState)) {
				operators.push_back(kgDOWNRIGHT);
			}
			break;
		}
	}

	
}

void GridWorld::ApplyOperator(GridWorldState & s, GridWorldMovements o)
{
	switch (o) {
	case kgLEFT:
		s.curX -= 1;
		break;
	case kgUP:
		s.curY -= 1;
		break;
	case kgRIGHT:
		s.curX += 1;
		break;
	case kgDOWN:
		s.curY += 1;
		break;
	case kgUPLEFT:
		s.curY -= 1;
		s.curX -= 1;
		break;
	case kgUPRIGHT:
		s.curY -= 1;
		s.curX += 1;
		break;
	case kgDOWNLEFT:
		s.curY += 1;
		s.curX -= 1;
		break;
	case kgDOWNRIGHT:
		s.curY += 1;
		s.curX += 1;
		break;
	}
}

void GridWorld::UndoOperator(GridWorldState & s, GridWorldMovements o)
{
	InvertOperator(o);
	ApplyOperator(s, o);
}

GridWorldMovements GridWorld::getOppositeDir(GridWorldMovements o)
{
	InvertOperator(o);
	return o;
}

void GridWorld::InvertOperator(GridWorldMovements & o)
{
	switch (o) {
	case kgLEFT:
		o = kgRIGHT;
		break;
	case kgUP:
		o = kgDOWN;
		break;
	case kgRIGHT:
		o = kgLEFT;
		break;
	case kgDOWN:
		o = kgUP;
		break;
	case kgUPLEFT:
		o = kgDOWNRIGHT;
		break;
	case kgUPRIGHT:
		o = kgDOWNLEFT;
		break;
	case kgDOWNLEFT:
		o = kgUPRIGHT;
		break;
	case kgDOWNRIGHT:
		o = kgUPLEFT;
		break;
	}
}

double GridWorld::getMovementCost(const GridWorldMovements& o) {
	if (o == kgLEFT || o == kgDOWN || o == kgRIGHT || o == kgUP) {
		return 1.0;
	}
	else if (o == kgNOTHING) {
		return 0;
	}
	else {
		return diagEdgeCost;
	}
}

void GridWorld::printWorld()
{
	for (int row = 0; row < WORLDHEIGHT; row++) {
		for (int col = 0; col < WORLDWIDTH; col++) {
			//printf("%4d ", board[row][col]);
			
		}
		printf("\n");
	}
}

// but this is just for debugging, so could just make two boards essentially, and update this one separetly.
void GridWorld::printWorldStateSpecific(GridWorldState start, GridWorldState goal) {
	//for (int row = 0; row < WORLDHEIGHT; row++) {
	//	printf("%03d:", row);
	//	for (int col = 0; col < WORLDWIDTH; col++) {
	//		if (row == start.curY && col == start.curX) {
	//			printf("%c", 's');
	//		}
	//		else if (row == goal.curY && col == goal.curX) {
	//			printf("%c", 'g');
	//		}
	//		else if(board[row][col] == -1){
	//			printf("@");// , board[row][col]);
	//		}
	//		else if (board[row][col] == 1) {
	//			printf(".");// , board[row][col]);
	//		}
	//		else if (board[row][col] == -4) {
	//			printf("!");
	//		}
	//		else if (board[row][col] == -2) {
	//			printf("o");
	//		}
	//		else if (board[row][col] == -3) {
	//			printf("c");
	//		}
	//		else if (board[row][col] == pivotVal) {
	//			printf("p");
	//		}
	//		else {
	//			printf("%d", board[row][col]);
	//		}
	//	}
	//	printf("\n");
	//}

	// printing new representation.
	//printf("printing grid.\n");
	//int exclaimCount = 0;
	printf("000:");
	for (int i = 0; i < WORLDHEIGHT*WORLDWIDTH; i++) {
		if (i == getIndex(start)) {
			printf("%c", 's');
		}
		else if (i == getIndex(goal)) {
			printf("%c", 'g');
		}
		//printf("(i: %d)", i);
		//printf("(grid.size() %u", grid.size());
		 else if (printingGrid[i] == -1) {
			printf("@");// , board[row][col]);
		}
		else if (printingGrid[i] == 1) {
			printf(".");// , board[row][col]);
		}
		else if (printingGrid[i] == -4) {
			printf("!");
			///exclaimCount++;
		}
		else if (printingGrid[i] == -2) {
			printf("o");
		}
		else if (printingGrid[i] == -3) {
			printf("c");
		}
		else if (printingGrid[i] == pivotVal) {
			printf("p");
		}
		else {
			printf("%d", printingGrid[i]);
		}
		if (i == (WORLDWIDTH - 1) || i != 0 && (i % (WORLDWIDTH )) == (WORLDWIDTH-1)) {
			printf("\n%03d:", ((i+1)/WORLDWIDTH));
		}
	}
	printf("\n");
	//printf("Number exclaims: %d\n", exclaimCount);
}

void GridWorld::printOperator(GridWorldMovements op)
{
	switch (op) {
	case kgLEFT:
		printf("LEFT ");
		break;
	case kgUP:
		printf("UP ");
		break;
	case kgRIGHT:
		printf("RIGHT ");
		break;
	case kgDOWN:
		printf("DOWN ");
		break;

	case kgUPLEFT:
		printf("UPLEFT ");
		break;
	case kgUPRIGHT:
		printf("UPRIGHT ");
		break;
	case kgDOWNLEFT:
		printf("DOWNLEFT ");
		break;
	case kgDOWNRIGHT:
		printf("DOWNRIGHT ");
		break;
	}
}

void GridWorld::printOperators(std::vector<GridWorldMovements> ops)
{
	for (int i = 0; i < ops.size(); i++) {
		printOperator(ops[i]);
		printf(",");
	}
	printf("\n");
}

void GridWorld::copyBoard(int** b) {
	for (int i = 0; i < WORLDHEIGHT; i++) {
		for (int j = 0; j < WORLDWIDTH; j++) {
			//b[i][j] = board[i][j];
		}
	}
}

void GridWorld::updateOpen(GridWorldState & s)
{
	//printf("updating open: position(x,y): (%d, %d)\n", s.curX, s.curY);
	//board[s.curY][s.curX] = -2;
	printingGrid[getIndex({ s.curX, s.curY })] = -2;
}

void GridWorld::updateClosed(GridWorldState & s)
{
	//board[s.curY][s.curX] = -3;
	printingGrid[getIndex({ s.curX, s.curY })] = -3;
}

void GridWorld::clearOpenClosed()
{
	//for (int i = 0; i < WORLDHEIGHT; i++) {
	//	for (int j = 0; j < WORLDWIDTH; j++) {
	//		if (board[i][j] == pivotVal) {
	//			board[i][j] = pivotVal;
	//		}else if (board[i][j] != -1) {
	//			board[i][j] = 1;
	//		}
	//	}
	//}
	//printf("clearing open closed.\n");
	for (int i = 0; i < WORLDHEIGHT*WORLDWIDTH; i++) {
		if (printingGrid[i] == -5) { // pivot.
			continue;
		}
		printingGrid[i] = grid[i];
		/*if (grid[i] != -1) {
			printingGrid[i] = 1;
		}*/
	}
}

GridWorldState::GridWorldState(const GridWorldState & s)
{
	curX = s.curX;
	curY = s.curY;
}
