#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::rand;

struct VECTOR2
{
	int x;
	int y;
};

char TicTacToe(int Players);
void DrawMap(char Grid[3][3]);
void AITurn(char Grid[3][3]);
char WinCondition(char Grid[3][3]);
void FirstPlayer(char Grid[3][3]);
void SecondPlayer(char Grid[3][3]);