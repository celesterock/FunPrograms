#include "main.h"

int main()
{

	const int ALPHA_LENGTH        = 26;
	const int NUM_LENGTH          = 10;
	const int SPECIAL_CHAR_LENGTH = 13;

	const int passLengthMin = 10;

	char alpha[ALPHA_LENGTH] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			                    'j', 'k', 'l', 'm', 'n', 'o', 'p','q', 'r',
								's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int num[NUM_LENGTH] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	char specialChars[SPECIAL_CHAR_LENGTH] = {'!', '@', '#', '$', '%', '^', '&',
		                                   	  '*', '(', ')', '-', '_', '+'};

	int passLength;
	int index;
	int selectType;

	string password;
	string addToPass;


	//big chinninja



   /****************************************************************************
	* PROCESSING - set the seed
	***************************************************************************/
	srand(time(NULL));

	do{
		cout << "How long would you like the password to be? ";
		cin  >> passLength;

		if (passLength < passLengthMin)
		{
			cout << endl
			     << "Error - please choose a password length of at least "
				 << passLengthMin << ". "
				 << endl << endl;
		}

		cin.ignore(10000,'\n');

	}while(passLength < passLengthMin);



	for (index = 0; index < passLength; index ++)
	{

		selectType = rand() % 6;

		switch(selectType)
		{
		case 0  :
		case 1  : addToPass = GetRandomChar(alpha, ALPHA_LENGTH);
		                      break;
		case 2  :
		case 3  : addToPass = toupper(GetRandomChar(alpha, ALPHA_LENGTH));
                              break;
		case 4  : addToPass = to_string(GetRandomInt(num, NUM_LENGTH));
		                      break;
		case 5  : addToPass = GetRandomSpecialChar(specialChars, SPECIAL_CHAR_LENGTH);
		}

		password += addToPass;
	}

	cout << endl << endl << "Your Password is: " << password;




	return 0;
}

