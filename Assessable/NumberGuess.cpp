#include "NumberGuessHeader.h"

char NumberGuess(int min, int max, int Lives, int AIorPlayer)
{
	int userInput;
	int RandomNumber;
	//When to leave the loop
	bool OkToGo = false;


	RandomNumber = RandomNumberGenerator(min, max);

	while (!OkToGo)
	{
		system("CLS");

		if (AIorPlayer == 1)
		{
			//If no more lives, return player as loss
			if (Lives <= 0)
				return 'l';

			//cout << "CHEAT! " << RandomNumber << " CHEAT!\n" << endl;
			cout << "You have " << Lives << " Tries left.\n" << endl;
			cout << "Guess a number I am thinking of. It is between " << min << " and " << max << endl;
			cin >> userInput;

			if (userInput < RandomNumber)
				cout << "My number is HIGHER than that." << endl;
			else if (userInput > RandomNumber)
				cout << "My number is LOWER than that." << endl;
			else
			{
				cout << "That is my number! Good Job." << endl;
				SystemPause();
				return 'w';
			}
			//Lose 1 life if number not guessed right.
			Lives--;
			Sleep(2000);
		}
		else
		{
			cout << "Choose a number between " << min << " and " << max << ": " << endl;
			cout << "Now the computer will guess your number.\n" << endl;
			system("PAUSE");

			if (GuessingAlgaorithm(min, max, Lives))
			{
				return 'w';
			}
			/*}*/
		}
		return ' ';
	}
}