#include "BattleArenaHeader.h"
#include<string>



void Introduction(Characters Team1[], Characters Team2[])
{
	bool OkToGo = false;
	


	DisplayStats(Team1, Team2);

	while (!OkToGo)
	{
		Fighting(Team1, Team2);
		if (CheckForWinner(Team1, Team2))
			return;
		system("CLS");
		DisplayStats(Team1, Team2);

		system("Pause");
	}
	return;
}


void BeginningDialog()
{
	system("CLS");
	cout << "Long ago, there was a battle of the generations." << endl;
	cout << "Here is what happened." << endl;
	system("PAUSE");
}
void PAUSE()
{
	system("PAUSE");
}
int RetrieveRandomNumber(int min, int max)
{
	return (rand() % (max + 1) + min);
}
void Fighting(Characters Team1[], Characters Team2[])
{
	int TempAttack;
	for (int i = 0; i < 6; i++)
	{
		system("CLS");


		//Which character gets attacked
		int AttackedCharacter = RetrieveRandomNumber(0, 5);

		//How much damage does team one do to team 2
		TempAttack = RetrieveRandomNumber(Team1[i].MinAttack, Team1[i].MaxAttack);
		Team2[AttackedCharacter].Health -= TempAttack;

		//Display to the player the Action
		cout << Team1[i].Name << " attacked " << Team2[AttackedCharacter].Name << " with " <<
			Team1[i].AttackName << " and inflicted " << TempAttack << " damage\n" << endl;
		system("PAUSE");

		system("CLS");

		//Which character gets attacked
		AttackedCharacter = RetrieveRandomNumber(0, 5);

		//How much damage does team one do to team 2
		TempAttack = RetrieveRandomNumber(Team2[i].MinAttack, Team2[i].MaxAttack);
		Team1[AttackedCharacter].Health -= TempAttack;

		//Display to the player the Action
		cout << Team2[i].Name << " attacked " << Team2[AttackedCharacter].Name << " with " <<
			Team2[i].AttackName << " and inflicted " << TempAttack << " damage\n" << endl;
		system("PAUSE");
	}
}
void DisplayStats(Characters Team1[], Characters Team2[]) 
{
	for (int i = 0; i < 6; i++)
	{
		cout << Team1[i].Name << " has " << Team1[i].Health << " left\t\t\t" << Team2[i].Name << " has " << Team2[i].Health << " left" << endl;
	}
}
void FirstTeamWon()
{
	system("CLS");
	cout << "And that is how the first team won!" << endl;
	system("PAUSE");
}
void SecondTeamWon()
{
	system("CLS");
	cout << "And that is how the second team won!" << endl;
	system("PAUSE");
}
bool CheckForWinner(Characters Team1[], Characters Team2[])
{
	int DeadOnTeam1 = 0;
	int DeadOnTeam2 = 0;

	for (int i = 0; i < 6; i++)
	{
		if (Team1[i].Health <= 0)
		{
			DeadOnTeam1++;
			cout << DeadOnTeam1;
			system("PAUSE");
		}
		if (Team2[i].Health <= 0)
		{
			DeadOnTeam2++;
			cout << DeadOnTeam2;
			system("PAUSE");
		}

		if (DeadOnTeam1 >= 6)
		{
			FirstTeamWon();
			return true;
		}
		if (DeadOnTeam2 >= 6)
		{
			SecondTeamWon();
			return true;
		}
	}
	return false;
}



