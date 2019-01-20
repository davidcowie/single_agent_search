
#include <stdio.h>
#include <iostream>
#include "STP.h"
#include <cassert>
//#include <random>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string.h>
#include "Timer.h"
#include <deque>
#include <queue>
#include <functional>
#include <fstream>
#include "IDAStar.h"
#include "DFID.h"
#include <iostream>
#include <iosfwd>
#include <string>
#include <sstream>
#include "PDB.h"
#include "BFS.h"
#include "ManhattanDistance.h"
#include "InefficientAStar.h"
#include "GridWorld.h"
#include "AStar.h"
#include "OctileHeuristic.h"
#include "DifferentialHeuristic.h"
#include "MaxHeuristic.h"
#include "CanonicalAStar.h"

//#define _CRT_SECURE_NO_WARNINGS




STPState RandomWalk2(STP game, STPState state, uint64_t n);
void userPlay();
// A random walk that doesn't go back to the parent state.
// should in theory get harder to solve as the number of steps increases. 
STPState RandomWalkMoreDifficult(STP game, STPState state, uint64_t n);
void printPath(std::vector<STPSlideDir>& path);
void applyAndPrintOperators(STPState originalState, STP game, std::vector<STPSlideDir>& parentPath);
void STPTimeTests();


int manhattanDistance(STP& game, STPState & s)
{
	//printf("calculating heurisitc\n");
	// calculate num moves for each num to get to its goal.
	// Need to know the goal location for each number.
	// how do without hard code in the numbers
	// would be nice to have a map from number to goal (x,y)
	// so could have a map to an array[2];
	// now, just loop through the board and easy.
	bool ignoreBlank = true;
	int score = 0;
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			// score will = abs(dx) + abs(dy)
			// so dy = row - map[#].y
			// so going to ignore the blank
			if (ignoreBlank && s.board[row][col] == 0) {
				continue;
			}
			int dx = abs(col - game.goals[s.board[row][col]].x);
			int dy = abs(row - game.goals[s.board[row][col]].y);
			score += (dx + dy);
		}
	}
	return score;
}


//template<typename T> void print_queue(T q) {
//	while (!q.empty()) {
//		std::cout << q.top() << " ";
//		q.pop();
//	}
//	std::cout << '\n';
//}

std::ostream& operator<<(std::ostream& out, const aStarStruct& s) {
	// and why not print out the costs
	//
	out << "----Printing aStartState ----- \n";
	out << "Fcost: " << s.fcost << ", hcost: " << s.hcost << ", gcost: " << s.gcost << "\n";
	//s.state.printState();
	for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
			if (s.state.board[y][x] < 10)
				out << s.state.board[y][x] << "  ";
			else
				out << s.state.board[y][x] << " ";
		}
		out << "\n";
	}
	return out;
}


std::vector<DifferentialHeuristic> setupRandomDiffHeuristic(GridWorld& gridWorld) {
	int randx = 0;
	int randy = 0;
	// setting pivot 1
	while (true) {
		randx = rand() % (gridWorld.WORLDWIDTH - 1);
		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
		printf("randx: %d, randy: %d\n", randx, randy);
		if (gridWorld.isValid({ randx, randy })) {
			break;
		}
	}
	GridWorldState ssss(randx, randy);
	printf("dh1\n");
	DifferentialHeuristic dh1(gridWorld, ssss);

	// setting pivot 2
	while (true) {
		randx = rand() % (gridWorld.WORLDWIDTH - 1);
		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
		printf("randx: %d, randy: %d\n", randx, randy);
		if (gridWorld.isValid({ randx, randy })) {
			break;
		}
	}
	ssss.curX = randx;
	ssss.curY = randy;
	printf("dh2\n");
	DifferentialHeuristic dh2(gridWorld, ssss);
	//gridWorld.setPivot(ssss);
	//gridWorld.printWorldStateSpecific(startState, goalState);
	while (true) {
		randx = rand() % (gridWorld.WORLDWIDTH - 1);
		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
		//printf("randx: %d, randy: %d\n", randx, randy);
		if (gridWorld.isValid({ randx, randy })) {
			break;
		}
	}
	ssss.curX = randx;
	ssss.curY = randy;
	printf("dh3\n");
	DifferentialHeuristic dh3(gridWorld, ssss);

	while (true) {
		randx = rand() % (gridWorld.WORLDWIDTH - 1);
		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
		//printf("randx: %d, randy: %d\n", randx, randy);
		if (gridWorld.isValid({ randx, randy })) {
			break;
		}
	}
	ssss.curX = randx;
	ssss.curY = randy;
	printf("dh4\n");
	DifferentialHeuristic dh4(gridWorld, ssss);
	gridWorld.setPivot(ssss);

	while (true) {
		randx = rand() % (gridWorld.WORLDWIDTH - 1);
		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
		//printf("randx: %d, randy: %d\n", randx, randy);
		if (gridWorld.isValid({ randx, randy })) {
			break;
		}
	}
	ssss.curX = randx;
	ssss.curY = randy;
	printf("dh5\n");
	DifferentialHeuristic dh5(gridWorld, ssss);
	gridWorld.setPivot(ssss);

	// this method seems to work.
	std::vector<DifferentialHeuristic> dhs;
	for (int i = 0; i < 5; i++) {
		while (true) {
			randx = rand() % (gridWorld.WORLDWIDTH - 1);
			randy = rand() % (gridWorld.WORLDHEIGHT - 1);
			//printf("randx: %d, randy: %d\n", randx, randy);
			if (gridWorld.isValid({ randx, randy })) {
				ssss.curX = randx;
				ssss.curY = randy;
				dh5 = DifferentialHeuristic(gridWorld, ssss);
				dhs.push_back(dh5);
				gridWorld.setPivot(dh5.getPivot());
				break;
			}
		}
	}

	/*dhs.push_back(dh1);
	dhs.push_back(dh2);
	dhs.push_back(dh3);
	dhs.push_back(dh4);
	dhs.push_back(dh5);

	gridWorld.setPivot(dh1.getPivot());
	gridWorld.setPivot(dh2.getPivot());
	gridWorld.setPivot(dh3.getPivot());
	gridWorld.setPivot(dh4.getPivot());*/
	return dhs;
}

std::vector<DifferentialHeuristic> setUpOptimalDifferentialHeuristic(GridWorld& gridWorld) {
	// pick 20 random(valid) points. These will be test points.
	int numTestPoints = 20;
	std::vector<GridWorldState> testPoints;
	int randx;
	int randy;
	for (int i = 0; i < numTestPoints; i++) {
		while (true) {
			randx = rand() % (gridWorld.WORLDWIDTH - 1);
			randy = rand() % (gridWorld.WORLDHEIGHT - 1);
			//printf("randx: %d, randy: %d\n", randx, randy);
			// want to add a check to make sure dont add the same point twice.
			GridWorldState s(randx, randy);
			if (gridWorld.isValid({ randx, randy }) && (std::find(testPoints.begin(), testPoints.end(), s) == testPoints.end())) {
				// Think should be able to just make one in here.
				//GridWorldState s(randx, randy);
				testPoints.push_back(s);
				break;
			}
		}
		/*printf("i : %d: ", i);
		testPoints[i].printState();*/
	}
	// So that works. now, need to pick 20 new random points as potential pivot points.
	// then build the DH for each one., then for each pivot point, check the sum of the heuristic to all pairs of test points.
	// which ever sum is the largest, pick that pivot, then repeat 5 times.
	std::vector<DifferentialHeuristic> dhs;
	MaxHeuristic<GridWorldState> differentialHeuristic;
	// need to calc the maxHeuristic q sum, which will be previous q + the best pivot
	int numDiffHeurs = 5;
	DifferentialHeuristic dheurs[5];
	for (int j = 0; j < numDiffHeurs; j++) {
		//printf("Starting pivot pick.\n");
		// now need to do the picking pivot points.
		std::vector<GridWorldState> potentialPivots;
		std::vector<DifferentialHeuristic> potDhs;
		int maxSum = 0;
		int maxIndex = 0;
		for (int i = 0; i < numTestPoints; i++) {
			while (true) {
				randx = rand() % (gridWorld.WORLDWIDTH - 1);
				randy = rand() % (gridWorld.WORLDHEIGHT - 1);
				//printf("randx: %d, randy: %d\n", randx, randy);
				// want to add a check to make sure dont add the same point twice.
				GridWorldState s(randx, randy);
				if (gridWorld.isValid({ randx, randy }) && (std::find(testPoints.begin(), testPoints.end(), s) == testPoints.end()) && (std::find(potentialPivots.begin(), potentialPivots.end(), s) == potentialPivots.end())) {
					// guess just make the differential heurisitc
					DifferentialHeuristic dh(gridWorld, s);
					potDhs.push_back(dh);
					potentialPivots.push_back(s);
					break;
				}
			}
		}
		// now should have 20 differential heuristics.
		// then for each one.. calculate the heuristic between all pairs of points in the test points(a double loop, i=0;i<n-1 - j = i; j<n
		for (int i = 0; i < potDhs.size(); i++) {
			//printf("i(%d) Pivot: ", i);
			//potDhs[i].getPivot().printState();
			// here make a maxHeuristic of the final one, and adding in this DiffHeur
			// think need a case if on the first iteration.
			MaxHeuristic<GridWorldState> tempHeur;
			if (j != 0) {
				//printf("adding previous heuristic j:%d\n", j);
				//tempHeur.addHeuristic(&differentialHeuristic);
				//printf("Added previous heuristic\n");
				//for (int z = 0; z < dhs.size(); z++) {
				//	tempHeur.addHeuristic(&dhs[i]);
				//} // even this way crashes it....

				for (int z = 0; z < j; z++) {
					tempHeur.addHeuristic(&dheurs[z]);
				}
			}
			tempHeur.addHeuristic(&potDhs[i]);
			//printf("added potential\n");
			int sum = 0;
			for (int m = 0; m < testPoints.size() - 1; m++) {
				//printf("About to use heuristic\n");
				for (int q = m; q < testPoints.size(); q++) {
					// here then, want to use the previous max of differential heuristics, with the ith potDh, and do that max.
					//sum += potDhs[i].h(testPoints[m], testPoints[q]);
					
					//if (j == 1) {
					//	//sum += dhs[1].h(testPoints[m], testPoints[1]); // this fails, so for some reason now, holding that heuristic is invalid...
					//	sum += dheurs[0].h(testPoints[m], testPoints[1]); // this fails, so for some reason now, holding that heuristic is invalid...
					//}
					//else {
					//	sum += tempHeur.h(testPoints[m], testPoints[q]); // so this call causes a problem...
					//}
					sum += tempHeur.h(testPoints[m], testPoints[q]); // this now works when using the array.
					//std::cout << "added for 1 point\n" << std::endl;
					//printf("Added the heuristic m: %d, q: %d\n", m, q);
				}
				//printf("finished comparision of 1 point.\n");
			}
			//printf("i(%d) heuristic sum: %d \n", i, sum);
			if (sum > maxSum) {
				maxSum = sum;
				maxIndex = i;
			}
		}

		//printf("Best Heuristic index: %d\n", maxIndex);

		// then want to add the maxIndex Diff Heur to the final list of Dh's
		//dhs.push_back(potDhs[maxIndex]); // this should work.
		dheurs[j] = potDhs[maxIndex];
		//differentialHeuristic.addHeuristic(&potDhs[maxIndex]);
		//printf("added something to the final heuristic finished j:%d \n", j);
		//getchar();
	}


	
	// then maybe go thru the diff heurs and make sure they are actually there...
	for (int i = 0; i < 5; i++) {
		dhs.push_back(dheurs[i]);
	}
	printf("The optimal Pivot Locations: \n");
	for (int i = 0; i < dhs.size(); i++) {
		dhs[i].getPivot().printState();
	}



	//getchar();
	return dhs;
}



void testMapBenchmarks(std::string mapPath, std::string benchProblemsPath) {
	
	GridWorld gridWorld(mapPath);
	Timer timer;
	//gridWorld.printWorld();
	//printf("=========\n");

	ManhattanDistance<GridWorldState> manDist;
	OctileHeuristic octileHeuristic;
	std::vector<GridWorldMovements> opPath;
	const int numHsss = 1;
	Heuristic<GridWorldState> *heuristiclistastar[numHsss] = { &octileHeuristic };
	MaxHeuristic<GridWorldState> maxDifferentialHeuristic;
	std::vector<DifferentialHeuristic> dhs = setupRandomDiffHeuristic(gridWorld);
	for (int i = 0; i < dhs.size(); i++) {
		maxDifferentialHeuristic.addHeuristic(&dhs[i]);
	}
	MaxHeuristic<GridWorldState> maxOctileDH;
	maxOctileDH.addHeuristic(&maxDifferentialHeuristic);
	maxOctileDH.addHeuristic(&octileHeuristic);

	AStar < GridWorld, GridWorldState, GridWorldMovements> astar;
	CanonicalAStar<GridWorld, GridWorldState, GridWorldMovements> canonicalAstar;
	gridWorld.setCanGoDiagonal(true); // is true by default.

	//astar.
	int totalProblems = 0;
	double efficientOctileTotalTime = 0;
	double efficientDHTotalTime = 0;
	double DHOctileTotalTime = 0;
	double canoncicalDHOctileTotalTime = 0;
	double jumpPointTotalTime = 0;
	uint64_t DHNodesExpanded = 0;
	uint64_t OctileNodesExpanded = 0;
	uint64_t DHOctileNodesExpanded = 0;
	uint64_t CanonicalNodesExpanded = 0;
	uint64_t JumpPointNodesExpanded = 0;
	// maybe get gcost of the goal to check if found it with right cost...

	// here need to read the file, there are 430 lines in this file.
	// set the start and the goal for each, then repeat.
	std::ifstream benchProblems(benchProblemsPath); //"orz301d.map.scen"
	if (!benchProblems) {
		printf("asldkfjasldfjalesfjalsdkfj\n");
		exit(2);
	}
	std::string line;
	if (benchProblems.is_open()) {
		int j = 0;
		int m = 0;
		benchProblems >> line;
		benchProblems >> line;

		while (benchProblems >> line) {
			while (m < 3) {
				benchProblems >> line;
				m++;
			}
			m = 0;
			int startX;
			int startY;
			int goalX;
			int goalY;
			benchProblems >> startX;
			benchProblems >> startY;
			benchProblems >> goalX;
			benchProblems >> goalY;
			std::cout << "(startX, startY): (" << startX << "," << startY << ") goalX, goalY: (" << goalX << "," << goalY << ")\n";
			//std::cout << line << "\n";
			benchProblems >> line;

			// Now use those coordinates to path find. yay
			GridWorldState startState(startX, startY);
			GridWorldState goalState(goalX, goalY);
			int count = 0;
			
			astar.setHeuristicWeight(1);
			gridWorld.clearOpenClosed();
			//printf("A star my openlist.\n");
			timer.StartTimer();
			astar.GetPath3(gridWorld, startState, goalState, &octileHeuristic, true, kgNOTHING);
			timer.EndTimer();
			double effTime = timer.GetElapsedTime();
			opPath = astar.getDirections();
			int a = opPath.size();
			float optimalGcost = astar.getGCost(goalState);
			printf("Octile::\t\t\t A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %d, Optimal Gcost: %f\n", timer.GetElapsedTime(), astar.GetNodesExpanded(), a, optimalGcost);
			OctileNodesExpanded += astar.GetNodesExpanded();
			efficientOctileTotalTime += effTime;

			// now with differential heuristic.
			gridWorld.clearOpenClosed();
			timer.StartTimer();
			astar.GetPath3(gridWorld, startState, goalState, &maxDifferentialHeuristic, true, kgNOTHING);
			timer.EndTimer();
			effTime = timer.GetElapsedTime();
			opPath = astar.getDirections();
			a = opPath.size();
			optimalGcost = astar.getGCost(goalState);
			printf("Differential Heuristic::\t A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %d, Optimal G cost: %f\n", timer.GetElapsedTime(), astar.GetNodesExpanded(), a, optimalGcost);
			DHNodesExpanded += astar.GetNodesExpanded();
			efficientDHTotalTime += effTime;

			// now using max of octile and the diffheuristics.
			gridWorld.clearOpenClosed();
			timer.StartTimer();
			astar.GetPath3(gridWorld, startState, goalState, &maxOctileDH, true, kgNOTHING);
			timer.EndTimer();
			effTime = timer.GetElapsedTime();
			opPath = astar.getDirections();
			a = opPath.size();
			optimalGcost = astar.getGCost(goalState);
			printf("Differential Heuristic & Octile::A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %d, Optimal Gcost: %f\n", timer.GetElapsedTime(), astar.GetNodesExpanded(), a, optimalGcost);
			DHOctileNodesExpanded += astar.GetNodesExpanded();
			DHOctileTotalTime += effTime;

			// Canonical A star.
			gridWorld.clearOpenClosed();
			timer.StartTimer();
			canonicalAstar.GetPath3(gridWorld, startState, goalState, &maxOctileDH, true, kgNOTHING);
			timer.EndTimer();
			effTime = timer.GetElapsedTime();
			opPath = canonicalAstar.getDirections();
			a = opPath.size();
			optimalGcost = canonicalAstar.getGCost(goalState);
			printf("Canonical A Star::A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %d, Optimal Gcost: %f\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), a, optimalGcost);
			CanonicalNodesExpanded += canonicalAstar.GetNodesExpanded();
			canoncicalDHOctileTotalTime += effTime;

			// Jump Point Search.
			gridWorld.clearOpenClosed();
			timer.StartTimer();
			canonicalAstar.JumpPointSearch(gridWorld, startState, goalState, &maxOctileDH, true, kgNOTHING);
			//canonicalAstar.JumpPointSearch(gridWorld, startState, goalState, &octileHeuristic, true, kgNOTHING); // a different part of the code crashes when i use this instead...
			timer.EndTimer();
			effTime = timer.GetElapsedTime();
			opPath = canonicalAstar.getDirections();
			a = opPath.size();
			optimalGcost = canonicalAstar.getGCost(goalState);
			printf("Jump Point Search::A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %d, Optimal Gcost: %f\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), a, optimalGcost);
			JumpPointNodesExpanded += canonicalAstar.GetNodesExpanded();
			jumpPointTotalTime += effTime;


			totalProblems++;
			j++;
			//getchar();
		}

		printf("Total Problems: %d\n", totalProblems);
		// also can get the avg time per puzzle.
		double avgOctileTime = efficientOctileTotalTime / (totalProblems*1.0);
		double avgDHTime = efficientDHTotalTime / (totalProblems*1.0);
		double avgDHOctileTime = DHOctileTotalTime / (totalProblems*1.0);
		double avgCanonicalTime = canoncicalDHOctileTotalTime / (totalProblems*1.0);
		double avgJumpTime = jumpPointTotalTime / (totalProblems*1.0);
		uint64_t avgOctileNodesExpanded = OctileNodesExpanded / totalProblems;
		uint64_t avgDHNodesExpanded = DHNodesExpanded / totalProblems;
		uint64_t avgDHOctileNodesExpanded = DHOctileNodesExpanded / totalProblems;
		uint64_t avgCanonicalNodesExpanded = CanonicalNodesExpanded / totalProblems;
		uint64_t avgJumpPointNodesExpanded = JumpPointNodesExpanded / totalProblems;
		printf("Octile avg time: %f, avg nodes: %llu\n", avgOctileTime, avgOctileNodesExpanded);
		printf("Differential avg time: %f, avg nodes: %llu\n", avgDHTime, avgDHNodesExpanded);
		printf("Differential & Octile avg time: %f, avg nodes: %llu\n", avgDHOctileTime, avgDHOctileNodesExpanded);
		printf("Canonical A Star average  time: %f, avg nodes: %llu\n", avgCanonicalTime, avgCanonicalNodesExpanded);
		printf("Jump Point Search average time: %f, avg nodes: %llu\n", avgJumpTime, avgJumpPointNodesExpanded);
		
		printf("Done.\n");
	}
	else {
		printf("ASDKFLAJSDLKFJASDLKFJADSF\n");
		exit(5);
	}

	getchar();
}



void testMapStuff(bool optimalDH) {
	//std::string mapPath = "orz301d.map"; // "lak303d.map";
	std::string mapPath = "lak303d.map";
	GridWorld gridWorld(mapPath);
	Timer timer;
	//gridWorld.printWorld();
	printf("=========\n");

	// to pick start and goal, start with basic just top half and bottom half.
	//int startSRow = 98;//120;// 120;// 113;//121;//gridWorld.WORLDHEIGHT * 0.55;
	printf("WORLD HEIGHT: %d\n", gridWorld.WORLDHEIGHT);
	//printf("startSRow: %d\n", startSRow);
	//int startSCol = 31;// 1;// 10;// 0;// 0;

	// these are for lak
	int startSRow = 59;// 176;//59;
	int startSCol = 10;// 100;//10;
	while (!gridWorld.isValid({ startSCol, startSRow })) {
		startSCol = (startSCol + 1) % gridWorld.WORLDWIDTH;
		if (startSCol == gridWorld.WORLDWIDTH - 1) {
			startSRow += 1;
			if (startSRow >= gridWorld.WORLDHEIGHT - 1) {
				startSRow = 0;
			}
		}
	}
	//startSCol = 30;
	//startSRow = 98;
	GridWorldState startState(startSCol, startSRow); // 8,10 // 50, 124
	printf("start state: ");
	startState.printState();
	startSRow = 126;//116;// 126;// 100;//138;
	startSCol = 32;// 33;// 32;// 29;//59;// 0;

	// for lak
	startSRow = 40;// 83;// 154;//83;
	startSCol = 80;// 4;// 82;//4;
	while (!gridWorld.isValid({ startSCol, startSRow })) {
		startSCol = (startSCol + 1) % gridWorld.WORLDWIDTH;
		if (startSCol == gridWorld.WORLDWIDTH - 1) {
			startSRow += 1;
			if (startSRow >= gridWorld.WORLDHEIGHT - 1) {
				startSRow = gridWorld.WORLDHEIGHT/2;
				startSCol = gridWorld.WORLDWIDTH / 2;
			}
		}
	}
	GridWorldState goalState(startSCol, startSRow); 
	printf("goal state: ");
	goalState.printState();

	gridWorld.printWorldStateSpecific(startState, goalState);

	ManhattanDistance<GridWorldState> manDist;
	OctileHeuristic octileHeuristic;
	std::vector<GridWorldMovements> opPath;
	const int numHsss = 1;
	Heuristic<GridWorldState> *heuristiclistastar[numHsss];// = { &octileHeuristic };// { &manDist };
	heuristiclistastar[0] = &octileHeuristic;
	MaxHeuristic<GridWorldState> maxheur;
	MaxHeuristic<GridWorldState> maxDiffHeur;
	//maxheur.addHeuristic(&octileHeuristic);

	GridWorldState sss(32, 126);
	//DifferentialHeuristic dh(gridWorld, sss); // but this doesn't cause a crash. -- would crash when would pass the gridworld by copy and not by reference.
	//gridWorld.setPivot(sss);
	//maxheur.addHeuristic(&dh);
	//DifferentialHeuristic dh(gridWorld, sss); // no idea why this makes it crash.. its like a left pointer or something
	//heuristiclistastar[1] = &dh;
	
	// so think this makes this crash...
	// but this way works yay.
	
	//std::vector<DifferentialHeuristic> dhs;
	// so these are empty for some reason...
	std::vector<DifferentialHeuristic> dhs = setUpOptimalDifferentialHeuristic(gridWorld);
	std::vector<DifferentialHeuristic> dhs1 = setupRandomDiffHeuristic(gridWorld);
	/*if (optimalDH) {
		dhs = setUpOptimalDifferentialHeuristic(gridWorld);
	}
	else {
		dhs = setupRandomDiffHeuristic(gridWorld);
	}*/

	printf("Optimal Pivot Spots: \n");
	for (int i = 0; i < dhs.size(); i++) {
		printf(" diff pivot: ");
		dhs[i].getPivot().printState();
		maxheur.addHeuristic(&dhs[i]);
	}
	printf("Random Pivot Spots: \n");
	MaxHeuristic<GridWorldState> maxRandomPivots;
	//maxRandomPivots.addHeuristic(&octileHeuristic);
	for (int i = 0; i < dhs1.size(); i++) {
		printf(" diff rrandom pivot: ");
		dhs1[i].getPivot().printState();
		maxRandomPivots.addHeuristic(&dhs1[i]);
	}


	//std::vector<DifferentialHeuristic> difHs;
	//// looping aint working.
	//for (int i = 0; i < numHsss; i++) {
	//	// need to figure outa random point.
	//	// guess randomX and randomY and keep going until not -1
	//	printf("i: %d\n", i);
	//	while (true) {
	//		randx = rand() % (gridWorld.WORLDWIDTH - 1);
	//		randy = rand() % (gridWorld.WORLDHEIGHT - 1);
	//		printf("randx: %d, randy: %d\n", randx, randy);
	//		if (gridWorld.isValid({ randx, randy })) {
	//			GridWorldState ss(randx, randy);
	//			// scoping issue.
	//			DifferentialHeuristic ddh;
	//			ddh.setUpHeuristic(gridWorld, ss);
	//			gridWorld.setPivot(ss);
	//			//ddh.setUpHeuristic(ss);
	//			printf("all set\n");
	//			//heuristiclistastar[i] = &ddh;
	//			difHs.push_back(ddh);
	//			//maxheur.addHeuristic(&ddh);
	//			break;
	//		}
	//	}
	//	maxheur.addHeuristic(&difHs[i]);
	//}
	printf("finished picking pivots\n");
	gridWorld.printWorldStateSpecific(startState, goalState);

	InefficientAStar<GridWorld, GridWorldState, GridWorldMovements> inAstar;
	AStar < GridWorld, GridWorldState, GridWorldMovements> astar;
	CanonicalAStar<GridWorld, GridWorldState, GridWorldMovements> canonicalAstar;
	//astar.setHeuristicWeight(0);
	gridWorld.setCanGoDiagonal(true);
	//astar.setStopAtGoal(false);

	int count = 0;
	//astar.setHeuristicWeight(1);
	//gridWorld.clearOpenClosed();
	printf("A star my openlist.\n");
	timer.StartTimer();
	//astar.GetPath(gridWorld, startState, goalState, heuristiclistastar, numHsss, true, kgNOTHING);
	astar.GetPath3(gridWorld, startState, goalState, &maxheur, true, kgNOTHING);
	timer.EndTimer();
	printf("A star my openlist elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), astar.GetNodesExpanded(), astar.getDirections().size());
	//gridWorld.printWorldStateSpecific(startState, goalState);

	// canonical A Star will still have roughly the same nodes expanded, but the same nodes wont be genereated as much.
	// so cause this removes duplicates, could you do a ida* or something in this domain now?
	gridWorld.clearOpenClosed();
	printf("Canonical A Star\n");
	timer.StartTimer();
	canonicalAstar.GetPath3(gridWorld, startState, goalState, &maxheur, true, kgNOTHING);
	timer.EndTimer();
	printf("Canonical A star elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), canonicalAstar.getDirections().size());
	gridWorld.printWorldStateSpecific(startState, goalState);

	gridWorld.clearOpenClosed();
	printf("Canonical A StarRandom Pivots\n");
	timer.StartTimer();
	canonicalAstar.GetPath3(gridWorld, startState, goalState, &maxRandomPivots, true, kgNOTHING);
	timer.EndTimer();
	printf("Canonical A star RandomPivots elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), canonicalAstar.getDirections().size());
	gridWorld.printWorldStateSpecific(startState, goalState);

	//canonicalAstar.setHeuristicWeight(0);
	//gridWorld.clearOpenClosed();
	//printf("Jump Point Search A Star\n");
	//timer.StartTimer();
	//canonicalAstar.JumpPointSearch(gridWorld, startState, goalState, &maxheur, true, kgNOTHING);
	////canonicalAstar.JumpPointSearch(gridWorld, startState, goalState, &octileHeuristic, true, kgNOTHING);
	//timer.EndTimer();
	//printf("Jump Point Search elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), canonicalAstar.getDirections().size());
	//gridWorld.printWorldStateSpecific(startState, goalState);
	//// ONLY THING with Jump point, is that the path only contains jump points... but I mean you simply follow the canonical ordering between jump points.

	// then for a dijkstras, hueristic weight is 0 and don't stop at the goal..
	// will do regular first.
	//astar.setHeuristicWeight(0);
	//astar.setStopAtGoal(false);
	//printf("Dijkstra's.\n");
	//timer.StartTimer();
	//astar.GetPath3(gridWorld, startState, goalState, &maxheur, true, kgNOTHING);
	//timer.EndTimer();
	//printf("Dijkstra's elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), astar.GetNodesExpanded(), astar.getDirections().size());
	//gridWorld.printWorldStateSpecific(startState, goalState);

	//canonicalAstar.setHeuristicWeight(0);
	//canonicalAstar.setStopAtGoal(false);
	//gridWorld.clearOpenClosed();
	//printf("Canonical Dijkstra's\n");
	//timer.StartTimer();
	//canonicalAstar.GetPath3(gridWorld, startState, goalState, &maxheur, true, kgNOTHING);
	//timer.EndTimer();
	//printf("Canonical Dijkstra's elapsed time: %f, Nodes Expanded: %llu, Optimal Moves: %u\n", timer.GetElapsedTime(), canonicalAstar.GetNodesExpanded(), canonicalAstar.getDirections().size());
	//gridWorld.printWorldStateSpecific(startState, goalState);



	// not sure how to get the gcosts, or how to demonstrate that...
	// so just going to use the path cause those are states that i have.
	printf("Gcost along path: ");
	printf("%f ,", astar.getGCost(startState));
	printf("\n");
	for (auto o : astar.getDirections()) {
		std::cout << "dir: " << o;
		// apply the operator and print out the gcost.
		gridWorld.ApplyOperator(startState, o);
		printf(" %f ,", astar.getGCost(startState));
		//gridWorld.printOperator(o);
		startState.printState();
	}
	printf("\n");

	// also could just print gcost of every state in the grid, cause why not
	//printf("ALL G Costs\n");
	//for (int i = 0; i < gridWorld.WORLDHEIGHT; i++) {
	//	for (int j = 0; j < gridWorld.WORLDWIDTH; j++) {
	//		//printf("astats\n");
	//		GridWorldState s(j, i);
	//		printf("%.1f|", astar.getGCost(s));
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	getchar();
}

/*
Think ill need to put all the old searches into their own files because of the operator of NOTHING
*/
int main(int argc, char** argv) {
	bool WANT_PRINT_BOARDS = false;
	STP game;
	Timer timer;
	STPState goalState;

	ManhattanDistance<STPState> manDist;
	/*
	WORKS IN RELASEASE MODE BUT NOT IN DEBug MODE>>>>....... WHYYYYY
	*/
	DFID dfid;
	BFS nbfs;
	IDAStar idaStar(manhattanDistance);
	IDAStar idaStarPDB(manhattanDistance);
	//InefficientAStar<STP, STPState, STPSlideDir> inaStar;
	
	int count = 0;
	STPState astartstate = RandomWalk2(game, goalState, 100);
	srand(time(NULL));
	testMapStuff(true);
	//testMapStuff(false);
	//freopen("README.txt", "w", stdout);
	std::string mapPath = "lak303d.map";// "orz301d.map";
	//testMapBenchmarks(mapPath, mapPath + ".scen");

	
	// needed on windows for visual studios to get the terminal to stay up.
	printf("End\n");
	getchar();
}



void STPTimeTests() {
	bool WANT_PRINT_BOARDS = false;
	STP game;
	Timer timer;
	STPState goalState;

	ManhattanDistance<STPState> manDist;

	int count = 0;
	DFID dfid;
	BFS nbfs;
	IDAStar idaStar(manhattanDistance);
	IDAStar idaStarPDB(manhattanDistance);

	InefficientAStar<STP, STPState, STPSlideDir> inaStar;

	const int numHsss = 1;
	// check how to get heuristic to work for any enviroment, or if i need to make a new heuristic per enviroment....
	// or in each heuristic, just override for each type.
	Heuristic<STPState> *heuristiclistastar[numHsss] = { &manDist };

	// so does that mean i need to put the arrays on the heap? -- it works then. do i have to delete that pointer?
	// The patterns. 
	std::vector<int> patt2 = { 0,9,10,11,12,13,14 };
	std::vector<int> patt = { 0, 1, 2, 3, 4, 5 }; // {0};

	printf("starting patterndatabase...\n");
	// Make the PDB's
	timer.StartTimer();
	PDB pdb(patt, false);
	timer.EndTimer();
	printf("Pattern 1 database took: %f\n", timer.GetElapsedTime());
	//getchar();
	timer.StartTimer();
	PDB pdb2(patt2, false);
	timer.EndTimer();
	printf("Pattern 2 database took: %f\n", timer.GetElapsedTime());
	//getchar();

	// add the heuristics to the list of ones to use.
	/*std::vector<Heuristic*> huers;
	huers.push_back(&pdb);
	huers.push_back(&pdb2);
	huers.push_back(&manDist);*/
	const int numHs = 3;
	Heuristic<STPState> *huers[numHs] = { &pdb, &pdb2, &manDist }; // took out pdb2

	// creating an array of bool that can be used to toggle each different search version. 
	//				   DFID Path, IDA*Sort, IDA*,  A*, BFSv4, NDFID, DFIDNoPath, NBFS, IDAPDB
	bool whichPrinting[9] = { false, false, true, false, false, false, false, false, true }; // { true, true, false, true, false, true }; // { true, false, false, false, false, true };


	// could make a table, like cols = (shufflenum, IDA*1 time,
	 // so like push times onto a vector, then just print that out
	 // at top go over which printing, and if it is true, print corresponding name.
	 // this way, could output the table to like a csv then could graph and stuff.
	std::vector<float> algTimes;
	std::vector<uint64_t> algNodes;
	bool wantPrintTable = false;
	char separator = '|';
	if (wantPrintTable) {
		printf("NumShuff %c", separator);
		if (whichPrinting[1]) {
			printf(" IDASort  %c", separator);
		}
		if (whichPrinting[2]) {
			printf(" IDA*(MD)     %c", separator);
		}
		if (whichPrinting[3]) {
			printf(" A*       %c", separator);
		}
		if (whichPrinting[4]) {
			printf(" BFS      %c", separator);
		}
		if (whichPrinting[5]) {
			printf(" NDFID    %c", separator);
		}
		if (whichPrinting[6]) {
			printf(" DFID");
		}
		if (whichPrinting[8]) {
			printf(" IDA (MD+PDB)  %c", separator);
		}
		printf("\n");
	}

	int maxShuffle = 200;
	for (int i = 5; i < maxShuffle; i++) {
		if (!wantPrintTable) {
			printf("------------------Current num shuffle: %d---------------\n", i);
		}
		STPState startstate = RandomWalk2(game, goalState, i);
		//STPState startstate = RandomWalkMoreDifficult(game, goalState, i);

		if (!wantPrintTable) {
			startstate.printState();
		}
		algTimes.clear();
		algNodes.clear();
		int counter = 0;

		if (whichPrinting[0]) { // DFID
			counter = 0;
			timer.StartTimer();
			//startRecDFSPath(startstate, false, counter);
			timer.EndTimer();
			printf("DFID no closed list time:\t\t\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), counter);
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(counter);
		}

		if (whichPrinting[1]) { // DFID
			counter = 0;
			timer.StartTimer();
			//idaStar.getPathSortChildren(game, startstate, goalState);
			dfid.GetPath(game, startstate, goalState);
			timer.EndTimer();
			if (!wantPrintTable) {
				//printf("IDAStar(MD) Sort Children time:\t\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), idaStar.getExpandedNodes());
				printf("DFID in class time:\t\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), dfid.GetNodesExpanded());
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(dfid.GetNodesExpanded());
		}

		if (whichPrinting[2]) { // IDA* (MD)
			counter = 0;
			timer.StartTimer();
			idaStar.getPath(game, startstate, goalState);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("IDAStar(MD) Recursive class time:\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), idaStar.getExpandedNodes());
				// print the path
				std::vector<STPSlideDir> path = idaStar.getDirections();
				//printPath(path);
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(idaStar.getExpandedNodes());
		}

		if (whichPrinting[3]) { //  AStar
			counter = 0;
			timer.StartTimer();
			//basicAStar(game, startstate, goalState, manhattanDistance, counter, false);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("AStar time:\t\t\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), counter);
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(counter);
		}
		if (whichPrinting[4]) {  // BFS
			counter = 0;
			timer.StartTimer();
			//BFSv4(game, startstate, counter);
			timer.EndTimer();
			printf("BFSv4 operators, no closed list: time:\t\t %f, Expanded Nodes: %d\n", timer.GetElapsedTime(), counter);
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(counter);
		}

		if (whichPrinting[5]) {  // NDFID
			timer.StartTimer();
			dfid.GetPath(game, startstate, goalState);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("Nathans DFID, time: \t\t\t %f, expanded Nodes: %d\n", timer.GetElapsedTime(), dfid.GetNodesExpanded());
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(dfid.GetNodesExpanded());
		}

		if (whichPrinting[6]) { // DFID no path
			timer.StartTimer();
			//startRecDFS(game, startstate, goalState, counter);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("DFID No path, time: \t\t\t %f, expandedNodes: %d\n", timer.GetElapsedTime(), counter);
			}
			algTimes.push_back(timer.GetElapsedTime());
		}

		if (whichPrinting[7]) {
			// NBFS
			timer.StartTimer();
			nbfs.GetPath(game, startstate, goalState);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("NBFS, time: \t\t\t %f, expandedNodes: %d\n", timer.GetElapsedTime(), nbfs.GetNodesExpanded());
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(nbfs.GetNodesExpanded());
		}

		if (whichPrinting[8]) {
			// IDA PDB
			timer.StartTimer();
			idaStarPDB.getPathHeurClass(game, startstate, goalState, huers, numHs);
			/// THIS STILL NEEDS WORK.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!KGGADKSJFKLG;FJSDAGKFWHGDFBFDJKTYFNARNGFABDNFL/K
			//idaStarPDB.getPathHeurClass(game, startstate, goalState, huers);
			timer.EndTimer();
			if (!wantPrintTable) {
				printf("IDA (PDB+MD), time: \t\t\t %f, expandedNodes: %d\n", timer.GetElapsedTime(), idaStarPDB.getExpandedNodes());
			}
			algTimes.push_back(timer.GetElapsedTime());
			algNodes.push_back(idaStarPDB.getExpandedNodes());
		}

		// then can print out the table.
		if (wantPrintTable) {
			/*printf("%d\t %c ", i, separator);
			for (int j = 0; j < algTimes.size(); j++) {
			printf("%f %c ", algTimes[j], separator);
			}*/
			// if printing expanded nodes or times.
			printf("%d\t %c ", i, separator);
			for (int j = 0; j < algNodes.size(); j++) {
				printf("%llu %20c ", algNodes[j], separator);
			}
		}
		printf("\n");

		//getchar();

	}

	// needed on windows for visual studios to get the terminal to stay up.
	getchar();
}


void applyAndPrintOperators(STPState originalState, STP game, std::vector<STPSlideDir>& parentPath) {
	originalState.printState();
	// then I could solve it by applying each operator.
	// think need to go in reverse.
	for (int i = parentPath.size() - 1; i >= 0; i--) {
		game.ApplyOperator(originalState, parentPath[i]);
		originalState.printState();
	}
}
void printPath(std::vector<STPSlideDir>& path) {
	// Need to go in reverse order.
	// I know that so it works. I could just reverse the vector but why waste time.
	for (int i = path.size() - 1; i >= 0; i--) {

		if (path[i] == UP) {
			printf("Up, ");
		}
		else if (path[i] == DOWN) {
			printf("Down, ");
		}
		else if (path[i] == LEFT) {
			printf("Left, ");
		}
		else if (path[i] == RIGHT) {
			printf("Right, ");
		}
		else {
			printf("Nothing, ");
		}
	}
	printf("\n");
}

STPState RandomWalk2(STP game, STPState state, uint64_t n) {
	state = STPState();
	std::vector<STPSlideDir> directions;
	uint64_t i = 0;
	while (n > i++) {
		// get the operators
		game.GetOperators(state, directions);
		// get a random direction.
		int r = rand() % directions.size();
		game.ApplyOperator(state, directions[r]);
	}
	return state;
}

STPState RandomWalkMoreDifficult(STP game, STPState state, uint64_t n) {
	state = STPState();
	std::vector<STPSlideDir> directions;
	uint64_t i = 0;
	STPSlideDir previousDir = UP;// NOTHING;
	while (n > i++) {
		// get the operators
		game.GetOperators(state, directions);
		// get a random direction.
		int r = rand() % directions.size();
		while (game.getOppositeDir(directions[r]) == previousDir) {
			r = rand() % directions.size();
		}
		game.ApplyOperator(state, directions[r]);
		previousDir = directions[r];
	}
	return state;
}

void userPlay() {
	STP slideGame;
	// test user input.
	char input;
	std::cin >> input;
	printf("input: %c\n", input);
	STPState gameState;
	while (input != 'q') {
		gameState.printState();
		std::cin >> input;
		if (input == 'w') {
			slideGame.ApplyOperator(gameState, UP);
		}
		else if (input == 's') {
			slideGame.ApplyOperator(gameState, DOWN);
		}
		else if (input == 'a') {
			slideGame.ApplyOperator(gameState, LEFT);
		}
		else if (input == 'd') {
			slideGame.ApplyOperator(gameState, RIGHT);
		}
		else {
			printf("ERROR\n");
			break;
		}
	}
}