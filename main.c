/******************************************************************************
*                                                                             *
*   Program : Caesar Cipher Decrypt                                           *
*                                                                             *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ciphertext[] = "Plisfkd moldoxjjfkd mrwwibp fp crk!"; //test string
    char tmpChar;
    int key = 3; //custom key to swap char's

	for(int i = 0; ciphertext[i] != '\0'; i++)
    {
        tmpChar = ciphertext[i];

        if(tmpChar >= 'a' && tmpChar <= 'z') //lower case alphabet
        {
            tmpChar = tmpChar + key;

            if(tmpChar < 'a')
            {
                tmpChar = tmpChar + 'z' - 'a' + 1; //first exeption for lower case (smaller then first element)
            }

            if(tmpChar > 'z')
            {
                tmpChar = tmpChar - 'z' + 'a' - 1; //second exeption for lower case (bigger then last element)
            }

            ciphertext[i] = tmpChar;
        }
		else if(tmpChar >= 'A' && tmpChar <= 'Z') //upper case alphabet
        {
			tmpChar = tmpChar + key;

			if(tmpChar < 'A')
			{
				tmpChar = tmpChar + 'Z' - 'A' + 1; //first exeption for upper case (smaller then first element)
			}

			if(tmpChar > 'Z')
            {
                tmpChar = tmpChar - 'Z' + 'A' - 1; //second exeption for upper case (bigger then last element)
            }

			ciphertext[i] = tmpChar;
		}
	}
	printf("> %s", ciphertext);
    return 0;
}
