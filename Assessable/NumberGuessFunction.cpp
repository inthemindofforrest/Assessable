#include "NumberGuessHeader.h"

int RandomNumberGenerator(int min, int max)
{
	int RandomNumber = rand() % (max - min + 1) + min;
	return RandomNumber;
}