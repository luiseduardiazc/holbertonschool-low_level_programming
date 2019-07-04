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
 *_strcmp - function that compares two strings
 *@s1: pointer parameter"
 *@s2: pointer parameter"
 *Description: This function compare two strings
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = _strlen(s1);
	int i, j = 0;

	for (i = 0; i <= len_s1; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				j = 15;
				break;
			}
			if (s1[i] < s2[i])
			{
				j = -15;
				break;
			}
		}
	}
	return (j);
}
