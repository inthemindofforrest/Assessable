#include "BattleArenaHeader.h"
#include<string>

void Introduction(Characters Team1[], Characters Team2[])
{
	bool OkToGo = false;
	int TempAttack;


	DisplayStats(Team1, Team2);

	while (!OkToGo)
	{
		for (int i = 0; i < 6; i++)
		{
			system("CLS");


			//Which character gets attacked
			int AttackedCharacter = RetrieveRandomNumber(0, 5);

			//How much damage does team one do to team 2
			TempAttack = RetrieveRandomNumber(Team1[i].MinAttack, Team1[i].MaxAttack);
			Team2[AttackedCharacter].Health -= TempAttack;

			//Display to the player the Action
			cout << Team1[i].Name << " attacked " << Team2[AttackedCharacter].Name << " with "<<
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
		
		system("CLS");
		DisplayStats(Team1, Team2);

		system("Pause");
	}
	
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
void DisplayStats(Characters Team1[], Characters Team2[]) 
{
	for (int i = 0; i < 6; i++)
	{
		cout << Team1[i].Name << " has " << Team1[i].Health << " left\t\t\t" << Team2[i].Name << " has " << Team2[i].Health << " left" << endl;
	}
}
