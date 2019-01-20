#include "STPState.h"



STPState::STPState()
{
	int count = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = count++;
		}
	}
	previousDir = NOTHING;
	blankCol = 0;
	blankRow = 0;
}

STPState::STPState(int b[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = b[i][j];
			if (board[i][j] == 0) {
				blankCol = j;
				blankRow = i;
			}
		}
	}
	previousDir = NOTHING;
}

STPState::STPState(const STPState& s)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = s.board[i][j];
		}
	}
	blankCol = s.blankCol;
	blankRow = s.blankRow;
	previousDir = NOTHING;
}

std::ostream& operator<<(std::ostream& out, const STPState& s)
{
	for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
			if (s.board[y][x] < 10)
				out << s.board[y][x] << "  ";
			else
				out << s.board[y][x] << " ";
		}
		out << "\n";
	}
	return out;
}

// if have both then get original error about == operator not found taking left hand operator of type const STPState...
//bool STPState::operator==(const STPState & s)
//{
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			if (board[i][j] != s.board[i][j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
bool operator==(const STPState & left, const STPState & right) {
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				if (left.board[i][j] != right.board[i][j]) {
					return false;
				}
			}
		}
		return true;
}

bool STPState::operator!=(const STPState & s)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] != s.board[i][j]) {
				return true;
			}
		}
	}
	return false;
}

STPState & STPState::operator=(const STPState & s)
{
	// TODO: insert return statement here
	STPState state;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = s.board[i][j];
		}
	}
	blankCol = s.blankCol;
	blankRow = s.blankRow;
	return *this;
}


STPState::~STPState()
{
}

void STPState::printState() {
	printf("\t\t----\tBoard\t----\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("\t%u", board[i][j]);
		}
		printf("\n");
	}
	printf("\t----\tEnd\t----\n");
}

