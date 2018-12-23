// George Khdryan, Leo Babakhanian
// CS/IS- 137 Wednesday 6:55PM
// Homework 1
#include "TicTacToe.h"
#include <iostream>
using namespace std;

int wrongNumber(int);

int main()
{
	TicTacToe game;
	int row = 0;
	int column = 0;
	int position = 0;
	int gameWinner = 0;
	int numTurns = 0;

	while (numTurns < 4)
	{
		cout << "Player 1 please pick the row and column you would like to select (pick between 0,1,2)" << endl;
		cin >> row;
		row = wrongNumber(row);
		cin >> column;
		column = wrongNumber(column);
		position = game.setPositions(row, column, 1);
		while (position == -1)
		{
			cout << "That position is taken, please choose another." << endl;
			cout << "Please pick an row and column you would like to select (pick between 0,1,2)" << endl;
			cin >> row;
			row = wrongNumber(row);
			cin >> column;
			column = wrongNumber(column);
			position = game.setPositions(row, column, 1);
		}
		cout << "Player 2 please pick the row and column you would like to select (pick between 0,1,2)" << endl;
		cin >> row;
		row = wrongNumber(row);
		cin >> column;
		column = wrongNumber(column);
		position = game.setPositions(row, column, 2);
		while (position == -1)
		{
			cout << "That position is taken, please choose another." << endl;
			cout << "Please pick an open row and column you would like to select (pick between 0,1,2)" << endl;
			cin >> row;
			row = wrongNumber(row);
			cin >> column;
			column = wrongNumber(column);
			position = game.setPositions(row, column, 2);
		}
		game.printBoard();
		gameWinner = game.determineWinner();
		if (gameWinner == 1)
		{
			cout << "Congrats Player 1, you have Won" << endl;
			numTurns = 5;
		}
		else if (gameWinner == 2)
		{
			cout << "Congrats Player 2, you have Won" << endl;
			numTurns = 5;
		}
		else
			numTurns++;
	}

	if (numTurns == 4)
	{
		cout << "You tied the game!" << endl;
	}

	system("PAUSE");
	return 0;
}


int wrongNumber(int x)
{
	int number = x;
	while (number < 0 || number>2)
	{
		cout << "Please only pick numbers between 0,1,2" << endl;
		cout << "Enter a new number" << endl;
		cin >> number;
	}
	return number;
}

