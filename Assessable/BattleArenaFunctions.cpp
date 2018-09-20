#include "BattleArenaHeader.h"
#include<string>



void Introduction(Characters Team1[], Characters Team2[], int Size)
{
	bool OkToGo = false;

	while (!OkToGo)
	{
		//Do a full fight cycle of both teams
		Fighting(Team1, Team2, Size);

		//Check if there is a winner, if there is, return and end the game
		if (CheckForWinner(Team1, Team2, Size))
			return;

		system("CLS");

		//Sort the teams with the health. Highest on the top of the list
		SortTeams(Team1, Team2, Size);

		//Display each team to the screen for the player to see
		DisplayStats(Team1, Team2, Size);
		system("Pause");
	}
	return;
}
int RetrieveRandomNumber(int min, int max)
{
	return (rand() % (max + 1) + min);
}
void Fighting(Characters Team1[], Characters Team2[], int Size)
{
	int TempAttack;
	for (int i = 0; i < Size; i++)
	{
		system("CLS");
		int AttackedCharacter = RetrieveRandomNumber(0, 5);

		//Which character gets attacked
		//while(Team2[AttackedCharacter].Health <= 0)
		 AttackedCharacter = RetrieveRandomNumber(0, 5);

		//How much damage does team one do to team 2
		TempAttack = RetrieveRandomNumber(Team1[i].MinAttack, Team1[i].MaxAttack);
		Team2[AttackedCharacter].Health -= TempAttack;

		//Display to the player the Action
		cout << Team1[i].Name << " attacked " << Team2[AttackedCharacter].Name << " with " <<
			Team1[i].AttackName << " and inflicted " << TempAttack << " damage\n" << endl;
		system("PAUSE");

		system("CLS");

		//Which character gets attacked
		//while (Team1[AttackedCharacter].Health <= 0)
			AttackedCharacter = RetrieveRandomNumber(0, 5);

		//How much damage does team one do to team 2
		TempAttack = RetrieveRandomNumber(Team2[i].MinAttack, Team2[i].MaxAttack);
		Team1[AttackedCharacter].Health -= TempAttack;

		//Display to the player the Action
		cout << Team2[i].Name << " attacked " << Team1[AttackedCharacter].Name << " with " <<
			Team2[i].AttackName << " and inflicted " << TempAttack << " damage\n" << endl;
		system("PAUSE");
	}
}
void DisplayStats(Characters Team1[], Characters Team2[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		if (Team1[i].Health < 0)
			Team1[i].Health = 0;

		if (Team2[i].Health < 0)
			Team2[i].Health = 0;

		//Displays the stats of each character from each team
		cout << Team1[i].Name << " has " << Team1[i].Health << " left\t\t\t" << Team2[i].Name << " has " << Team2[i].Health << " left" << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;
}
void winningTeam(int Team)
{
	system("CLS");

	//If Team1 has won, Display that they won
	if (Team == 1)
		cout << "And that is how the first team won!" << endl;

	//If Team 2 has won, Display that they won
	else
		cout << "And that is how the second team won!" << endl;

	system("PAUSE");
}
bool CheckForWinner(Characters Team1[], Characters Team2[], int Size)
{
	int DeadOnTeam1 = 0;
	int DeadOnTeam2 = 0;

	for (int i = 0; i < Size; i++)
	{
		//if the characters health is less than or equat to zero, record that team as one more dead.
		if (Team1[i].Health <= 0)
		{
			DeadOnTeam1++;
			//cout << DeadOnTeam1;
			system("PAUSE");
		}
		if (Team2[i].Health <= 0)
		{
			DeadOnTeam2++;
			//cout << DeadOnTeam2;
			system("PAUSE");
		}
		
		//if the recorded number dead on that team equals the total amount of characters on the team, Other team wins.
		if (DeadOnTeam1 >= Size)
		{
			winningTeam(2);
			return true;
		}
		if (DeadOnTeam2 >= Size)
		{
			winningTeam(1);
			return true;
		}
	}
	return false;
}
void SortTeams(Characters Team1[], Characters Team2[], int Size)
{
	Characters tempHolder;
	//Team1
	for (int i = 0; i < Size; i++)
	{
		for (int j = i; j < Size; j++)
		{
			if (Team1[j].Health > Team1[i].Health)
			{
				tempHolder = Team1[i];
				Team1[i] = Team1[j];
				Team1[j] = tempHolder;
			}
		}

	}

	//Team2
	for (int i = 0; i < Size; i++)
	{
		for (int j = i; j < Size; j++)
		{
			if (Team2[j].Health > Team2[i].Health)
			{
				tempHolder = Team2[i];
				Team2[i] = Team2[j];
				Team2[j] = tempHolder;
			}
		}

	}
}



