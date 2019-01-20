#include "PDB.h"

int factorial(int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
//
//PDB::PDB()
//{
//}

// hard code for now
// 0 1 2 3 4 5 (3,603,600 entries)
PDB::PDB(std::vector<int> patt, bool useRv1) // : pDatabase(3603600)
{
	pattern = patt;
	useRankv1 = useRv1;

	dual = new int[pattern.size()];  // LOOK AT THE FUNCTIONS WHERE I PASS THE DUAL THROUGH AS A PARAMETER 

	uint64_t currentEntries = 1; // for the start node.

	// open the savedPatternNames and fill in which ones are saved.
	std::ifstream patNameFile("savedPatternNames.txt");
	std::string line;
	while (std::getline(patNameFile, line)) {
		savedPatternNames.push_back(line);
	}
	patNameFile.close();
	//printf("num saved patterns: %d\n", savedPatternNames.size());

	// convert pattern to a string...
	std::stringstream ss;
	//std::copy(pattern.begin(), pattern.end(), std::ostream_iterator<int>(ss, ""));
	for (int i = 0; i < pattern.size(); i++) {
		//printf("pat item: %d\n", pattern[i]);
		ss << pattern.at(i);
		//printf("ss:");
	}
	//ss << "\n";
	//printf("converting to string...\n");
	std::string patname = ss.str();
	//printf("printing\n");
	//printf("pattern name: %s\n", patname.c_str());
	bool haveSavedPattern = false;
	for (int i = 0; i < savedPatternNames.size(); i++) {
		if (savedPatternNames[i] == patname) {
			// then already have it so just read that one in.
			haveSavedPattern = true;
			break;
		}
	}
	// DOESNT QUITE WORK YET, SO A WASTE OF TIME
	if (haveSavedPattern) {
		printf("saved the pattern!\n");
		// now need to open that filename.
		// which will be patternname .txt
		std::string filename = patname;
		filename.append(".txt");
		std::ifstream patternFile(filename);
		uint8_t val;
		while (patternFile >> val) {
			//printf("val: %u\n", val);
			pDatabase.push_back(val);

		}
	}
	else {

		// picked 100 cause I knew there wouldn't be more than that.
		// could have inserted dynamically but that would be more complicated.
		for (int i = 0; i < 100; i++) {
			pdbDistribution.push_back(0);
		}

		// i think that even during the computation the thing overflows...
		int numNoFac = ROWS * COLS;
		int domNoFac = numNoFac - patt.size();
		int diff = numNoFac - domNoFac;
		int z = 0;

		uint64_t numThings = 1;// = factorial(ROWS*COLS) / (factorial((ROWS*COLS) - patt.size()));
		while (z < diff) {
			numThings *= (numNoFac - z);
			z++;
		}
		//printf("Num Things %llu\n", numThings);
		for (uint64_t i = 0; i < numThings; i++) {  // init the database.
			pDatabase.push_back(255);
		}

		// need to figure out its size first.
		//pDatabase(3603600);
		//std::fill(pDatabase.begin(), pDatabase.end(), 255);
		// so have the pattern

		// Start with the goal State
		STP game;
		STPState start;
		// BFS until stop
		std::deque<BFSNode> q;
		std::vector<STPSlideDir> acts;
		q.push_back({ start, NOTHING, 0 });
		// need to compute rank of the start first.
		uint64_t rank = 0;

		// dual is the length of the pattern.
		// this is the wrong size!!!!!!!!!
		//int dual[7]; // hard coded for this example.
		//int *dual = new int[pattern.size()]; // do i need to delete this?
		// add 2 pattern databases together? when can do thsat?
		// THIS CAN JUST BE SET TO 15 CAUSE WILL NEVER BE GREATER
		computeRank(start, rank, dual);
		pDatabase[rank] = 0;
		pdbDistribution[0] = 1;
		int currDepth = 0;
		uint64_t previousExpansions = 0;

		while (q.size() > 0)
		{
			BFSNode n = q.front();
			q.pop_front();

			if (currentEntries >= pDatabase.size()) {
				break;
			}

			game.GetOperators(n.s, acts);

			for (auto act : acts)
			{
				if (act == n.forbidden)
					continue;

				game.ApplyOperator(n.s, act);
				act = game.getOppositeDir(act);
				computeRank(n.s, rank, dual);
				//if (rank == 1) {
				//	// SO THERE CAN BE A RANK OF 1, BECAUSE THE LAST VAL IN THE MIXED RADIX CAN BE 1 (NOT 0 ALWAYS)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				//	printf("WTFWTFWTFWTFWTFWTF!!!!!!!!\n");
				//	n.s.printState();
				//}
				//printf("Rank: %llu\n", rank);
				// then check the rank in the PDB array
				// if its rank is already there, do i still gen its successors?
				if (pDatabase[rank] == 255) {
					// then no entry so put gcost in that slot
					// which i guess it just the depth
					pDatabase[rank] = n.depth + 1; // <- should this be depth+1? because n.depth = parents depth and this is a child.
					currDepth = n.depth + 1;
					pdbDistribution[n.depth + 1]++;
					currentEntries++;
					q.push_back({ n.s, act, n.depth + 1 });
				}

				game.ApplyOperator(n.s, act);
			}
			//getchar();
		}
		// farily certain will never have a rank of 1
		//CHECK DONT THINK A RANK OF 1 IS POSSIBLE IF THE PATTERN LENGTH IS MORE THAN 1

		// print the pdb for now
		//printf("The database: ");
		//for (int i = 0; i < pDatabase.size(); i++) {
		//	printf("%u, ", pDatabase[i]);
		//}
		//printf("\n");

		// distribution part 2
		// loop back over the database, 0 to numThings
		//printf("current depth?maybe max: %d\n", currDepth);
		std::vector<int> distPTwo;
		for (int i = 0; i < currDepth + 1; i++) {
			distPTwo.push_back(0);
		}
		//printf("doing stuff\n");
		for (int i = 0; i < numThings; i++) {
			//printf("pddatabseentry: %u\n", pDatabase[i]);
			distPTwo[pDatabase[i]]++;
		}
		for (int i = 0; i < distPTwo.size(); i++) {
			if (distPTwo[i] == 0) {
				break;
			}
			printf("%d : %d\n", i, distPTwo[i]);
		}

		bool wantSavePDB = false;
		if (wantSavePDB) {
			// NOW CAN WRITE THE PDB TO A FILE!!
			std::string filename = (patname);
			filename.append(".txt");// +".txt";
			std::cout << "filename: " << filename << "\n";
			std::ofstream patFile(filename);
			if (patFile.is_open()) {
				printf("pdatabasee.size: %d\n", pDatabase.size());
				for (int i = 0; i < pDatabase.size(); i++) {
					//printf("adding something\n");
					//patFile << "1\n\0";
					patFile << pDatabase[i] + "\n\0";
				}
				patFile.close();
			}
			else {
				printf("Error creating file.\n");
			}

			// then add the pattern name to the file of pattern names.
			/*std::ofstream patNamesFileThing;
			patNamesFileThing.open("savedPatternNames.txt", std::ios_base::app);
			patNamesFileThing << patname.append("\n");
			patNamesFileThing.close();*/
		}

	}
	//printf("All done\n");

	// print distribution
	//for (int i = 0; i < pdbDistribution.size(); i++) {
	//	if (pdbDistribution[i] == 0) {
	//		break;
	//	}
	//	printf("%d : %d\n", i, pdbDistribution[i]);	
	//}
	printf("PDB Complete. %d of %d entries complete\n", currentEntries, pDatabase.size()); 

	// want to write the pdatabase to a file, , upon construction, check if have already created that patterndatabase, if so, then just read in the file.
	// could either have a map to a filename or just have the pattern convert to a string and put into a list.
	// then can save that file to read each time.
	// for simplicity, going to have each pattern just be the numbers in it concatenated together without the commas.
	// so need to always order the patterns.
}

PDB::~PDB()
{
	delete dual;
}

// really should use an array for the dual and the mixed...
void PDB::computeRank(const STPState & state, uint64_t & rank, int* dual)
{

	// ok, first, need to compute the dual
	// the dual will be an array the same length as the pattern.
	// it is the correspoding index(as a rank) of each pattern element.
	// so loop over the pattern to get each element and look for it in the state.
	// the base of dual is the length of the puzzle(15)

	// will use a vector for now
	//std::vector<int> dual;
	//printf("dual: ");
		// now loop over state
	bool dualfull = false;
	int dualIndex = 0;
	// could store each piece location in the state itself....
	int indesies[ROWS*COLS]; // size of the puzzle.
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			indesies[state.board[row][col]] = COLS * row + col;
		}
	}
	for (int i = 0; i < pattern.size(); i++) {
		dual[i] = indesies[pattern[i]];
	}

	//	for (int i = 0; i < dual.size(); i++) {
	//		printf("%d ,", dual[i]);

	//	}
	//
	//printf("\n");
	// the dual is in base of the number of tiles(15)

	convertToMixedRadix(dual);
	//printf("Mixed Radix: ");
	//for (int i = 0; i < mixed.size(); i++) {
	//	printf("%d ,", mixed[i]);
	//	
	//}
	//printf("\n");
	// so when converting, * (base - 1)! /(totalTiles-length(dual))!
	int N = ROWS*COLS;
	//rank = rankFromMixed(mixed, N);
	// now it changes the original dual
	rank = rankFromMixed(dual, N);
	//printf("Rank in the other: %d\n", rank);
}

std::vector<int> PDB::unrank(int rank,int patLength, int N) {
	// so will return the mixed radix unranked.
	// ao 

	// kinda recursive
	std::vector<int> mixed;
	int i = 0;
	int divFactor = 0;
	while (i < patLength) {
		// its rank/ ((factorial(mixed.size() - (i+1)))/ (N - patlength)
		// then rank %= same thing
		divFactor = (factorial(patLength - (i + 1))) / factorial(N - patLength);
		mixed.push_back((int)(rank / divFactor));
		rank %= divFactor;
		// if rank here is 0, then just fill in with zero's
		if (rank == 0) {
			i++;
			while (i < patLength) {
				mixed.push_back(0);
				i++;
			}
			break;
		}
		i++;
	}

	return mixed;
}


// somthing like a!/b!
// a > b
uint64_t factWithDivision(uint64_t a, uint64_t b) {
	uint64_t diff = a - b;
	uint64_t z = 0;

	uint64_t numThings = 1;// = factorial(ROWS*COLS) / (factorial((ROWS*COLS) - patt.size()));
	while (z < diff) {
		numThings *= (a - z);
		z++;
	}
	return numThings;
}

uint64_t PDB::rankFromMixed(int* mixed, int N) {
	uint64_t rank = 0;
	int numNotInpattern = N - pattern.size();
	//printf("num not in pattern: %d\n", numNotInpattern);
	// believe this here also overflows...
	//int divisor = factorial(N - mixed.size());

	for (int i = 0; i < pattern.size(); i++) {
		// mixedRadiVal*((lengthofDual -1*(i+1))!/(N - lengthofDual)!

		//int numrator = (factorial(N - (i + 1)));

		rank += mixed[i] * factWithDivision((N - (i + 1)), (N - pattern.size())); // numrator / divisor;
	}

	return rank;
}

void PDB::convertToMixedRadix(int* dual ){//std::vector<int> dual) {
	// so start computed the mixed radix
	// loop over dual, first element stays
	// check all others, if any number is greater than that element, subtract by 1 and put it in, then repeat
	//std::vector<int> mixedRadix; // = dual;
	//for (int i = 0; i < pattern.size(); i++) {
	//	mixedRadix.push_back(dual[i]);
	//}
	//int mixedRadix;
	for (int i = 0; i < pattern.size(); i++) {
		// check all elems to left of i, if any greater than mixed[i] then sub 1
		for (int j = i + 1; j < pattern.size(); j++) {
			/*if (mixedRadix[j] > mixedRadix[i]) {
				mixedRadix[j] -= 1;
			}*/
			if (dual[j] > dual[i]) {
				dual[j] -= 1;
			}
		}

	}

	//return mixedRadix;
}

std::vector<int> PDB::convertMixedToFixed(std::vector<int> mixed) {
	std::vector<int> fixed;

	// dont fully remember how to do this!!!!!

	return fixed;
}

float PDB::h(const STPState & s, const STPState & goal)
{
	// rank the state and get index from the database
	uint64_t rank;
	// pattern.length
	// this is the issue!!!!!
	//int dual[6];
	computeRank(s, rank, dual);
	return pDatabase[rank];
}

float PDB::h(const GridWorldState & s, const GridWorldState & goal)
{
	return 0.0f;
}
