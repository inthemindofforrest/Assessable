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
void Introduction(Characters Team1[], Characters Team2[], int Size);
int RetrieveRandomNumber(int min, int max);
void DisplayStats(Characters Team1[], Characters Team2[], int Size);
void Fighting(Characters Team1[], Characters Team2[], int Size);
bool CheckForWinner(Characters Team1[], Characters Team2[], int Size);
void winningTeam(int);
void SortTeams(Characters Team1[], Characters Team2[], int Size);
//void IntroductionToGame(Characters Team1[], Characters Team2[], int Size);