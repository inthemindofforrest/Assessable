#pragma once
#include <iostream>
#include "Windows.h"
#include "time.h"
using namespace std;

int RandomNumberGenerator(int min, int max);
char NumberGuess(int min, int max, int Lives, int AIorPlayer);
char GuessingAlgaorithm(int Min, int Max, int attempts);
void SystemPause();