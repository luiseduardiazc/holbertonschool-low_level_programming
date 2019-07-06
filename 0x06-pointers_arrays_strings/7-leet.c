#include "holberton.h"
/**
 *leet - change letters by numbers
 *@s1: pointer parameter"
 *Description: change letters by numbers
 *Return: return pointer
 */
char *leet(char *s1)
{
	int j;
	char *pString = s1;

	char encodes[10][2] = {
				{'a', '4'},
				{'A', '4'},
				{'e', '3'},
				{'E', '3'},
				{'o', '0'},
				{'O', '0'},
				{'t', '7'},
				{'T', '7'},
				{'l', '1'},
				{'L', '1'}
				};

	while (*pString != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			char letter = *pString;

			if (letter == encodes[j][0])
			{
				*pString = encodes[j][1];
			}
		}
		pString++;
	}
	return (s1);
}
