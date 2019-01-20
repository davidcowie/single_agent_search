#include "OctileHeuristic.h"



OctileHeuristic::OctileHeuristic()
{
	minDiagCost = sqrt(2);
}


OctileHeuristic::~OctileHeuristic()
{
}

float OctileHeuristic::h(const GridWorldState& s, const GridWorldState& goal) {
	float dx = abs(s.curX - goal.curX);
	float dy = abs(s.curY - goal.curY);

	// so D being the minimal cardinal movement cost. D2 being cost of diagonal movement.
	float D = 1;
	float D2 = sqrt(2);
	float mdd = std::max(dx, dy);
	float mindd = std::min(dx, dy);
	//return std::max(dx, dy) + (D2 - 1)*std::min(dx, dy);
	//return mdd + (1.5 - 1)*mindd;
	
	//return D * (dx + dy) + (D2 - 2 * D)* std::min(dx, dy);
	if (dx < dy) {
		// smaller dist times octile cost
		//return (sqrt(2) - 1)* dx + dy;
		//std::cout << "Octile: " << sqrt(2) * dx + (dy - dx) << "\n";
		//std::cout << "Euclid: " << sqrt(dx*dx + dy * dy) << "\n";
		return (sqrt(2) * dx + (dy - dx)); //My attempt
		//return dx * (sqrt(2)) - dy;
	}
	else {
		//return (sqrt(2) - 1)*dy + dx;
		//return dy * (sqrt(2)) - dx;
		//std::cout << "Octile: " << sqrt(2) * dy + (dx - dy) << "\n";
		//std::cout << "Euclid: " << sqrt(dx*dx + dy * dy) << "\n";
		return (sqrt(2) * dy + (dx - dy)); //My attempt
	}

	// THIS IS EUCLIDIAN DISTANCE!!! IT WORKS CAUSE IT IS ADMISSIBLE -- CURRENTLY CANT GET OCTILE TO WORK
	//return sqrt(dx*dx + dy * dy);
	//return dx * dx + dy * dy; // this very bad.
}
// should not be used for STP
//float OctileHeuristic::h(const STPState& s, const STPState& goal) {
//	return 0.0f;
//}
