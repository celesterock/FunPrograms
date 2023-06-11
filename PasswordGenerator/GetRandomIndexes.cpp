#include "main.h"

void GetRandomIndexes(int &AlphaIndex,
		              int &IntIndex,
					  int &SpecialCharIndex,
					  const int ALPHA_LENGTH,
					  const int NUM_LENGTH,
					  const int SPECIAL_CHAR_LENGTH)
{
	// Chose a random number for each list which will be the index chosen
	AlphaIndex       = rand() % (ALPHA_LENGTH - 1);
	IntIndex         = rand() % (NUM_LENGTH - 1);
	SpecialCharIndex = rand() % (SPECIAL_CHAR_LENGTH - 1);
}

