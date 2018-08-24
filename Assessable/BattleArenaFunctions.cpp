#include "BattleArenaHeader.h"

void Introduction(CHARACTER Player)
{
	
	cout << "Welcome to the world of ________!" << endl;
	cout << "And who might you be?" << endl;
	Player.Name = CharacterName(Player);
	cout << "So your name is " << Player.Name << "?" << endl;
	system("PAUSE");
	
}

char CharacterName(CHARACTER Player)
{
	char UserInput;
	cout << "1) John\t\t2) James\n3) Jimmy\t4) Jack\n";
	cin >> UserInput;

	switch (UserInput)
	{
	case '1':
		Player.Name = "John";
		break;
	case '2':
		Player.Name = "James";
		break;
	case '3':
		Player.Name = "Jimmy";
		break;
	case '4':
		Player.Name = "Jack";
		break;
	default:
		break;
	}
	return ' ';
}