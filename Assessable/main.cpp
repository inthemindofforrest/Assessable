#include <iostream>
#include "TicTacToeHeader.h"
#include "NumberGuessHeader.h"
#include "BattleArenaHeader.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*char UserInput;
	bool OkToGo = false;
	int Wins = 0;

	//Scrable up da randomness
	srand(time_t(NULL));

	while (!OkToGo)
	{
		//Requesting the user to choose which game to play
		system("CLS");
		cout << "Games won: \n" << Wins << endl;
		cout << "Which game would youl like to play?" << endl;
		cout << "1) Tic-Tac-Toe" << endl;
		cout << "2) Number Guessing Game" << endl;
		cout << "e) Quit" << endl;

		cin >> UserInput;

		//Checking the input, choose which game to load up
		switch (UserInput)
		{
		case '1':
			system("CLS");
			cout << "Would you like to play with:" << endl;
			cout << "1) One player\n2) Two player";
			cin >> UserInput;

			if (UserInput == '1')
				if (TicTacToe(1) == 'w')
				{
					Wins++;
				}
			if (UserInput == '2')
				if (TicTacToe(2) == 'w')
				{
					Wins++;
				}
			break;

		case '2':
			system("CLS");
			cout << "Difficulty:" << endl;
			cout << "1) Easy\n2) Medium\n3) Hard";
			cin >> UserInput;

			if (UserInput == '1')
				if (NumberGuess(0, 50, 5))
				{
					Wins++;
				}
			if (UserInput == '2')
				if (NumberGuess(0, 100, 10))
				{
					Wins++;
				}
			if (UserInput == '3')
				if (NumberGuess(0, 250, 25))
				{
					Wins++;
				}
			break;
		case '3':
			BattleArena();
			break;
		case 'e':
			OkToGo = true;
			break;
		default:
			break;
		}
	}*/
	TicTacToe(2);
	return 0;
}