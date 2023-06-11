#include "main.h"
char GetRandomChar(char alpha[],
		           const int ALPHA_LENGTH)
{
	char randomChar;
	int AlphaIndex;

	AlphaIndex       = rand() % (ALPHA_LENGTH - 1);

	randomChar = alpha[AlphaIndex];

	return(randomChar);

}


