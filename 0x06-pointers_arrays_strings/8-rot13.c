#include "holberton.h"
/**
 *root13 - change letters by numbers
 *@s1: pointer parameter"
 *Description: Rotate letters
 *Return: return pointer
 */
char *rot13(char *s1)
{
	int j;
	char *pString = s1;

	char encodes[2][52] = {
	{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"},
	{"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"}
				};

	while (*pString != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			char letter = *pString;

			if (letter == encodes[0][j])
			{
				*pString = encodes[1][j];
			}
		}
		pString++;
	}
	return (s1);
}
