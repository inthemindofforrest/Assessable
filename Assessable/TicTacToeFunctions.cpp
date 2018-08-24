#include "TicTacToeHeader.h"

void DrawMap(char Grid[3][3])
{
	//Draw the game board one line at a time.
	cout << "  1   2   3  " << endl;
	cout << "  " << Grid[0][0] << " | " << Grid[0][1] << " | " << Grid[0][2] << endl;
	cout << "1 __|___|__" << endl;
	cout << "  " << Grid[1][0] << " | " << Grid[1][1] << " | " << Grid[1][2] << endl;
	cout << "2 __|___|__" << endl;
	cout << "  " << Grid[2][0] << " | " << Grid[2][1] << " | " << Grid[2][2] << endl;
	cout << "3   |   |  " << endl;
}

void AITurn(char Grid[3][3])
{
	bool OkToGo = false;

	//Simple AI that places their O at the next availible space
	while (!OkToGo)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (Grid[i][j] == ' ')
				{
					Grid[i][j] = 'O';
					return;
				}
			}
		}


	}
}

char WinCondition(char Grid[3][3])
{
	//Checks all the possible win conditions
	if (Grid[0][0] == 'X' && Grid[0][1] == 'X' && Grid[0][2] == 'X' ||
		Grid[1][0] == 'X' && Grid[1][1] == 'X' && Grid[1][2] == 'X' ||
		Grid[2][0] == 'X' && Grid[2][1] == 'X' && Grid[2][2] == 'X' ||
		Grid[0][0] == 'X' && Grid[1][0] == 'X' && Grid[2][0] == 'X' ||
		Grid[0][1] == 'X' && Grid[1][1] == 'X' && Grid[2][1] == 'X' ||
		Grid[0][2] == 'X' && Grid[1][2] == 'X' && Grid[2][2] == 'X' ||
		Grid[0][0] == 'X' && Grid[1][1] == 'X' && Grid[2][2] == 'X' ||
		Grid[0][2] == 'X' && Grid[1][1] == 'X' && Grid[2][0] == 'X')
		return'w';
	else if (Grid[0][0] == 'O' && Grid[0][1] == 'O' && Grid[0][2] == 'O' ||
		Grid[1][0] == 'O' && Grid[1][1] == 'O' && Grid[1][2] == 'O' ||
		Grid[2][0] == 'O' && Grid[2][1] == 'O' && Grid[2][2] == 'O' ||
		Grid[0][0] == 'O' && Grid[1][0] == 'O' && Grid[2][0] == 'O' ||
		Grid[0][1] == 'O' && Grid[1][1] == 'O' && Grid[2][1] == 'O' ||
		Grid[0][2] == 'O' && Grid[1][2] == 'O' && Grid[2][2] == 'O' ||
		Grid[0][0] == 'O' && Grid[1][1] == 'O' && Grid[2][2] == 'O' ||
		Grid[0][2] == 'O' && Grid[1][1] == 'O' && Grid[2][0] == 'O')
		return'l';
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (Grid[i][j] == ' ')
					return 'n';
			}
		}
		return 'd';
	}

}

void FirstPlayer(char Grid[3][3])
{
	//First player controller
	VECTOR2 Position;

	int UserInput;//The user input
	bool OkToGo = false;//Whether you can leave the loop or not

	while (!OkToGo)
	{
		cout << "Player1) Row: ";
		cin >> UserInput;
		Position.x = UserInput;

		cout << "Player1) Column: ";
		cin >> UserInput;
		Position.y = UserInput;

		if (Grid[Position.x - 1][Position.y - 1] == ' ')
		{
			Grid[Position.x - 1][Position.y - 1] = 'X';
			return;
		}
		else
			continue;
	}
}

void SecondPlayer(char Grid[3][3])
{
	//Second player controller
	VECTOR2 Position;

	int UserInput;//The user input
	bool OkToGo = false;//Whether you can leave the loop or not

	while (!OkToGo)
	{
		cout << "Player2) Row: ";
		cin >> UserInput;
		Position.x = UserInput;

		cout << "Player2) Column: ";
		cin >> UserInput;
		Position.y = UserInput;

		if (Grid[Position.x - 1][Position.y - 1] == ' ')
		{
			Grid[Position.x - 1][Position.y - 1] = 'O';
			return;
		}
		else
			continue;
	}
}