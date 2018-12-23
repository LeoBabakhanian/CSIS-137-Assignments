// George Khdryan, Leo Babakhanian
// CS/IS- 137 Wednesday 6:55PM
// Homework 1
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
using namespace std;

class TicTacToe
{
private:
	int gameBoard[3][3];
	char winner;

public:
	TicTacToe();
	int setPositions(int, int, int);
	int checkRows();
	int checkColumns();
	int checkDiagonals();
	void printBoard();
	int determineWinner();

};

#endif
