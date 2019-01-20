#include "DifferentialHeuristic.h"



DifferentialHeuristic::DifferentialHeuristic()
{
	printf("Differential heuristic\n");
}

DifferentialHeuristic::DifferentialHeuristic( GridWorld & game, GridWorldState& s)
{
	//printf("Setting up heuristic Constructor.\n");
	//printf("DIFFERENTIAL HEURISTIC:: start state: ");
	//s.printState();
	pivot = s; // not this
	WORLDWIDTH = game.WORLDWIDTH;
	//gridWorld = game; // not this.
	//AStar<GridWorld, GridWorldState, GridWorldMovements> astar;

	GridWorldState goal(1, 1);
	OctileHeuristic oh;
	Heuristic *ehuristics[1] = { &oh };
	MaxHeuristic<GridWorldState> maxh;
	maxh.addHeuristic(&oh);
	astar.setStopAtGoal(false);
	astar.setHeuristicWeight(0);
	astar.GetPath3(game, s, goal, &maxh, true, kgNOTHING);
	game.clearOpenClosed();
	//gd.clearOpenClosed();
	//printf("finished setup\n");
	//getchar();
	gcosts.resize(game.WORLDHEIGHT*game.WORLDWIDTH);

	// set up local gcost array. so loop over every state.
	for (int row = 0; row < game.WORLDHEIGHT; row++) {
		for (int col = 0; col < game.WORLDWIDTH; col++) {
			// get gcost from the astar thing.
			GridWorldState s(col, row);
			//printf("%.1f|", astar.getGCost({col, row}));
			gcosts[getIndex({ col, row })] = astar.getGCost({ col, row });
		}
		//printf("\n");
	}
}

//DifferentialHeuristic::DifferentialHeuristic(GridWorld game, GridWorldState p)
//{
//	printf("Start differential.\n");
//	//pivot = p;
//	// simply do an astar search, set to go past goal.
//	// also need to set heuristic weight to 0 so I run a breadth first search i think?...
//	//astar = AStar<GridWorld, GridWorldState, GridWorldMovements>();
//	//astar.setStopAtGoal(false);
//	//astar.setHeuristicWeight(0);
//	// also need some heuristics to pass in cause thats what the function asks for.
//	//const int numHs = 1;
//	//OctileHeuristic octileHeuristic;
//	//Heuristic *heuristiclistastar[numHs] = { &octileHeuristic };// { &manDist };
//	//GridWorldState goalState(1, 1); // it doesnt matter.
//	//GridWorld game;
//	//astar.GetPath(game, p, goalState, heuristiclistastar, numHs, true, kgNOTHING);
//	// think that is it.
//}


DifferentialHeuristic::~DifferentialHeuristic()
{
}

float DifferentialHeuristic::h(const GridWorldState & s, const GridWorldState & goal)
{
	// subtract their gcosts
	// so this is expensive I guess...
	//float sgcost = astar.getGCost(s);
	//float ggcost = astar.getGCost(goal);
	////// should it be the absolute value of the difference?
	////// heuristic should be positive so i guess take abs
	//
	////printf("Hcost: %f\n", abs(sgcost - ggcost));
	//return abs(sgcost - ggcost);

	return abs(gcosts[getIndex(s)] - gcosts[getIndex(goal)]);
	
	//return 0.0f;
}

float DifferentialHeuristic::h(const STPState & s, const STPState & goal)
{
	return 0.0f;
}

/*
Crashes when dont pass it by reference.... 
So that clearly means something bad is happening....
So maybe that was also the issue in the constructor.
*/
void DifferentialHeuristic::setUpHeuristic(const GridWorld &gd, GridWorldState & s)
{
	printf("Setting up heuristic.\n");
	printf("start state: ");
	s.printState();
	pivot = s;
	gridWorld = gd;
	//AStar<GridWorld, GridWorldState, GridWorldMovements> astar;
	
	GridWorldState goal(1, 1);
	OctileHeuristic oh;
	Heuristic *ehuristics[1] = { &oh };
	//GridWorld gridWorld;
	//std::string mapPath = "orz301d.map"; // "lak304d.map";//
	//GridWorld gridWorld(mapPath);
	astar.setStopAtGoal(false);
	astar.setHeuristicWeight(0);
	astar.GetPath(gridWorld, s, goal, ehuristics, 1, true, kgNOTHING);
	printf("\n Grid world after astar...\n");
	gridWorld.printWorldStateSpecific(s, goal);
	printf("Finished setup\n\n");
	gridWorld.clearOpenClosed();
	//gd.clearOpenClosed();
}
void DifferentialHeuristic::setUpHeuristic(GridWorldState & s)
{
	printf("Setting up heuristic.\n");
	printf("start state: ");
	s.printState();
	pivot = s;
	//gridWorld = gd;
	//AStar<GridWorld, GridWorldState, GridWorldMovements> astar;

	GridWorldState goal(1, 1);
	OctileHeuristic oh;
	Heuristic *ehuristics[1] = { &oh };
	GridWorld gridWorld;
	std::string mapPath = "orz301d.map"; // "lak304d.map";//
	GridWorld gridWorldd(mapPath);
	astar.setStopAtGoal(false);
	astar.setHeuristicWeight(0);
	printf("starting astar\n");
	astar.GetPath(gridWorldd, s, goal, ehuristics, 1, true, kgNOTHING);
	printf("\n Grid world after astar...\n");
	gridWorld.printWorldStateSpecific(s, goal);
	printf("Finished setup\n\n");
}

void DifferentialHeuristic::printHeuristic()
{
	// guess just go over every state...
	for (int i = 0; i < gridWorld.WORLDHEIGHT; i++) {
		for (int j = 0; j < gridWorld.WORLDWIDTH; j++) {
			//printf("astats\n");
			GridWorldState s(j, i);
			float f = astar.getGCost(s);
			if (f == 0) {
				printf("@@@@@|");
			}
			else {
				printf("%05.1f|", astar.getGCost(s));
			}
		}
		printf("\n");
	}
	printf("\n");
}

// maybe a print heuristitc.

