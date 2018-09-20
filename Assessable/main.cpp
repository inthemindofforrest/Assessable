#include <iostream>
#include <fstream>
#include "TicTacToeHeader.h"
#include "NumberGuessHeader.h"
#include "BattleArenaHeader.h"
using namespace std;

bool saveGame(int wins);
bool loadGame(int * wins);

int main()
{

	char UserInput;
	bool OkToGo = false;
	int Wins = 0;

	//Scrable up da randomness
	srand(time(NULL));

	if (loadGame(&Wins))
	{
		cout << "Save File Loaded." << endl;
		cout << "Wins: " << Wins << endl;
		system("PAUSE");
	}
	else
	{
			cout << "Save File could not load..." << endl;
			system("PAUSE");
	}

	while (!OkToGo)
	{
		//Requesting the user to choose which game to play
		system("CLS");
		cout << "Games won: \n" << Wins << endl;
		cout << "Which game would you like to play?" << endl;
		cout << "1) Tic-Tac-Toe" << endl;
		cout << "2) Number Guessing Game" << endl;
		cout << "3) Battle Arena" << endl;
		cout << "s) Save Progress" << endl;
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
			cout << "Would you like to choose the number, or the computer?:" << endl;
			cout << "1) Me\n2) Computer";
			cin >> UserInput;
			if (UserInput == '1')
			{
				system("CLS");
				cout << "Difficulty:" << endl;
				cout << "1) Easy\n2) Medium\n3) Hard";
				cin >> UserInput;

				if (UserInput == '1')
					if (NumberGuess(0, 50, 5, 2))
					{
						Wins++;
					}
				if (UserInput == '2')
					if (NumberGuess(0, 100, 10, 2))
					{
						Wins++;
					}
				if (UserInput == '3')
					if (NumberGuess(0, 250, 25, 2))
					{
						Wins++;
					}
			}
			else
			{
			system("CLS");
			cout << "Difficulty:" << endl;
			cout << "1) Easy\n2) Medium\n3) Hard";
			cin >> UserInput;

			if (UserInput == '1')
				if (NumberGuess(0, 50, 5, 1))
				{
					Wins++;
				}
			if (UserInput == '2')
				if (NumberGuess(0, 100, 7, 1))
				{
					Wins++;
				}
			if (UserInput == '3')
				if (NumberGuess(0, 250, 9, 1))
				{
					Wins++;
				}
			}
			break;
		case '3':
			UserInput = ' ';
			BattleArena();
			break;
		case 's':
			saveGame(Wins);
			break;
		case 'e':
			OkToGo = true;
			break;
		default:
			break;
		}
	}
	return 0;
}


bool loadGame(int * wins)
{
	string Wins;

	ifstream SaveFile ("Save.txt");
	if (SaveFile.is_open())
	{
		while (getline(SaveFile,Wins))
		{
			*wins = stoi(Wins);
			SaveFile.close();
			return true;
		}
		SaveFile.close();
		return false;
	}
}

bool saveGame(int wins)
{
	ofstream SaveFile;
	if (SaveFile)
	{
		SaveFile.open("save.txt");
		SaveFile << wins << endl;
		SaveFile.close();
	}
	else
	{
		cout << "error while creating a save file" << endl;
		system("PAUSE");
		return false;
	}
}