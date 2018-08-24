#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::string;

struct ATTRIBUTES
{
	int Health;
	int Stamina;
	int Defense;
	int Courage;
	int Intelligence;
};

struct CHARACTER
{
	ATTRIBUTES Attributes;
	string Name;
	string Class;
};


char BattleArena();