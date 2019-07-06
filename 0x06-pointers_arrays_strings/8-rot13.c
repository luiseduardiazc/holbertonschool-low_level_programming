#include "holberton.h"
/**
 *rot13 - Rotate letters
 *@s1: pointer parameter
 *Description: Rotate letters
 *Return: return pointer
 */
char *rot13(char *s1)
{
	int j;
	char *pString = s1;

	char encodes[2][53] = {
	{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"},
	{"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"}
				};

	while (*pString != '\0')
	{
		char letter = *pString;

		for (j = 0; j < 52; j++)
		{
			if (letter == encodes[0][j])
			{
				*pString = encodes[1][j];
			}
		}
		pString++;
	}
	return (s1);
}
