// George Khdryan, Leo Babakhanian
// CS/IS- 137 Wednesday 6:55PM
// Homework 1
#include <iostream>
#include <iomanip>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()//done
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gameBoard[i][j] = 0;
		}
	}
}

int TicTacToe::setPositions(int row, int column, int user)//done
{
		if (gameBoard[row][column] == 0)
		{
			gameBoard[row][column] = user;
			return 0;
		}
		else
		{
			return -1;
		}
}

int TicTacToe::checkRows()//done
{
	int threeInRowX = 0;
	int	threeInRowO = 0;
	
	if (gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2])
	{
		if (gameBoard[0][0] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][0] == 2)
		{
			threeInRowO = 3;
		}
	}
	else if (gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2])
	{
		if (gameBoard[1][0] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[1][0] == 2)
		{
			threeInRowO = 3;
		}
	}
	else if (gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2])
	{
		if (gameBoard[2][0] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[2][0] == 2)
		{
			threeInRowO = 3;
		}
	}
	else
	{
		threeInRowX = 0;
		threeInRowO = 0;
	}
	if (threeInRowX == 3)
	{
		winner = 1;
		return winner;
	}
	if (threeInRowO == 3)
	{
		winner = 2;
		return winner;
	}
	return 0;
}

int TicTacToe::checkColumns()//done
{
	int threeInRowX = 0;
	int	threeInRowO = 0;

	if (gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0])
	{
		if (gameBoard[0][0] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][0] == 2)
		{
			threeInRowO = 3;
		}
	}
	else if(gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1])
	{
		if (gameBoard[0][1] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][1] == 2)
		{
			threeInRowO = 3;
		}
	}
	else if (gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2])
	{
		if (gameBoard[0][2] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][2] == 2)
		{
			threeInRowO = 3;
		}
	}
	else
	{
		threeInRowX = 0;
		threeInRowO = 0;
	}
	if (threeInRowX == 3)
	{
		winner = 1;
		return winner;
	}
	if (threeInRowO == 3)
	{			
		winner = 2;
		return winner;
	}
		
	return 0;
}

int TicTacToe::checkDiagonals()//done
{
	int threeInRowX = 0;
	int threeInRowO = 0;

	if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
	{
		if (gameBoard[0][0] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][0] == 2)
		{
			threeInRowO = 3;
		}
	}
	else if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0])
	{
		if (gameBoard[0][2] == 1)
		{
			threeInRowX = 3;
		}
		if (gameBoard[0][2] == 2)
		{
			threeInRowO = 3;
		}
	}
	else
	{
		threeInRowX = 0;
		threeInRowO = 0;

	}
	if (threeInRowX == 3)
	{
		winner = 1;
		return winner;
	}
	if (threeInRowO == 3)
	{
		winner = 2;
		return winner;
	}

	return 0;
}

void TicTacToe::printBoard()// done
{
	for (int i = 0; i < 3; i++)
		{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << gameBoard[i][j];
		}
		cout << endl;
	}	
}
	

int TicTacToe::determineWinner()//done
{
	int winner = 0;
	winner = checkRows();
	if (winner == 0)
		winner = checkColumns();
	if (winner == 0)
		winner = checkDiagonals();

	return winner;
}
