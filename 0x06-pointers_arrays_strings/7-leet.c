#include "holberton.h"
#include <string.h>
/**
 *leet - change letters by numbers
 *@s1: pointer parameter"
 *Description: change letters by numbers
 *Return: return pointer
 */
char *leet(char *s1)
{
	int i, j;
	int len = strlen(s1) - 1;
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

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s1[i] == encodes[j][0])
			{
				s1[i] = encodes[j][1];
			}
		}
	}
	return (s1);
}
