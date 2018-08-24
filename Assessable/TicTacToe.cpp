#include "TicTacToeHeader.h"

char TicTacToe(int Players)
{
	int UserInput;//The user input
	bool OkToGo = false;//Whether you can leave the loop or not
	char Grid[3][3] = { ' ',' ', ' ',' ',' ', ' ' ,' ',' ', ' ' };//The board the player plays on

	//Game loop
	while (!OkToGo)
	{
		system("CLS");
		DrawMap(Grid);

		FirstPlayer(Grid);
		if (Players == 1)
			AITurn(Grid);
		else
			SecondPlayer(Grid);

		if (WinCondition(Grid) == 'w')
			return'w';
		if (WinCondition(Grid) == 'l')
			return'l';
		if (WinCondition(Grid) == 'd')
			return'd';
	}
	system("PAUSE");
	return' ';
}