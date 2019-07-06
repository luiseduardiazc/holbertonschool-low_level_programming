#include "holberton.h"
#include <stdio.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *leet - change letters by numbers
 *@s1: pointer parameter"
 *Description: change letters by numbers
 *Return: return pointer
 */
char *leet(char *s1)
{
	int i, j;
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

	for (i = 0; i < _strlen(s1) - 1; i++)
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
