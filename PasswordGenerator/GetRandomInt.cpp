#include "main.h"

int GetRandomInt(int num[],
		           const int NUM_LENGTH)
{
	char randomInt;
	int IntIndex;

	IntIndex       = rand() % (NUM_LENGTH - 1);

	randomInt = num[IntIndex];

	return(randomInt);
}

