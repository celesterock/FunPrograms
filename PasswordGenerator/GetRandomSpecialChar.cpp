#include "main.h"
char GetRandomSpecialChar(char specialChars[],
		                  const int SPECIAL_CHAR_LENGTH)
{
	char randomChar;
	int SpecialCharIndex;

	SpecialCharIndex    = rand() % (SPECIAL_CHAR_LENGTH - 1);

	randomChar = specialChars[SpecialCharIndex];

	return(randomChar);

}



