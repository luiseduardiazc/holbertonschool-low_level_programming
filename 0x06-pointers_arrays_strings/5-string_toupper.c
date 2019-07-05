#include "holberton.h"
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
 *string_toupper - changes all lowercase letters
 *@s1: pointer parameter"
 *Description: changes all lowercase letters
 *Return: return pointer
 */
char *string_toupper(char *s1)
{
	int i, j;

	for (i = 0; i < _strlen(s1) - 1; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s1[i] == j)
			{
				s1[i] = j - 32;
			}
		}
	}
	return (s1);
}
