#pragma once
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Characters
{
public:

	int Health;
	string Name;
	string AttackName;
	int MinAttack;
	int MaxAttack;
};

char BattleArena();
void Introduction(Characters Team1[], Characters Team2[]);
void PAUSE();
int RetrieveRandomNumber(int min, int max);
void DisplayStats(Characters Team1[], Characters Team2[]);
void Fighting(Characters Team1[], Characters Team2[]);
bool CheckForWinner(Characters Team1[], Characters Team2[]);
void FirstTeamWon();
void SecondTeamWon();