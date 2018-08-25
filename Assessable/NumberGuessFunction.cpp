#include "NumberGuessHeader.h"

int RandomNumberGenerator(int min, int max)
{
	int RandomNumber = rand() % (max + 1) + min;
	return RandomNumber;
}

void SystemPause()
{
	cout << "Press ENTER to continue..." << endl;
	getchar();
}

char GuessingAlgaorithm(int Min, int Max, int attempts)
{
	int userInput;
	int CurrentGuess = 0;
	bool OkToGo = false;

	while (!OkToGo)
	{
		system("CLS");
		if (attempts <= 0)
		{
			cout << "I am too tired to guess anymore, you win!" << endl;
			system("PAUSE");
			return 'w';
		}

		if (CurrentGuess == (int)(Min + (Max - Min) / 2))
		{
			cout << "You must be cheating!" << endl;
			return ' ';
		}


		CurrentGuess = Min + (Max - Min) / 2;
		cout << "Is your number " << CurrentGuess << endl;

		cout << "1) My number is Higher\n2)My number is Lower\n3) Yes, That's my number" << endl;
		cin >> userInput;

		switch (userInput)
		{
		case 1:
			Min = CurrentGuess;
			break;
		case 2:
			Max = CurrentGuess;
			break;
		case 3:
			return 'l';
			break;
		default:
			break;
		}
		attempts--;
	}


}