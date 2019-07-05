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
 *cap_string - changes all lowercase letters
 *@s1: pointer parameter"
 *Description: changes all lowercase letters
 *Return: return pointer
 */
char *cap_string(char *s1)
{
	int i, j;

	for (i = 0; i < _strlen(s1) - 1; i++)
	{
		if (
			s1[i] == ' ' ||
			s1[i] == '\t' ||
			s1[i] == '\n' ||
			s1[i] == ',' ||
			s1[i] == ';' ||
			s1[i] == '.' ||
			s1[i] == '!' ||
			s1[i] == '?' ||
			s1[i] == '"' ||
			s1[i] == '(' ||
			s1[i] == ')' ||
			s1[i] == '{' ||
			s1[i] == '}'
		)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (s1[i + 1] == j)
				{
					s1[i + 1] = j - 32;
				}
			}
		}
	}
	return (s1);
}
