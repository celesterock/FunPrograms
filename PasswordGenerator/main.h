#include <iostream>      /* cin, cout          */
#include <iomanip>
#include <cstdlib>		/* rand				   */
#include <ctime>		/* time	 			   */
#include <sstream>

using namespace std;

#ifndef MAIN_H_
#define MAIN_H_


char GetRandomChar(char alpha[],
		           const int ALPHA_LENGTH);

int GetRandomInt(int num[],
		          const int NUM_LENGTH);

char GetRandomSpecialChar(char specialChars[],
		           const int SPECIAL_CHAR_LENGTH);

#endif /* MAIN_H_ */


