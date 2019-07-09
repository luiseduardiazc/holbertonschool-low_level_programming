#include "holberton.h"
/**
 *_strpbrk - locates a character in a string
 *@s: pointer parameter
 *@accept: pointer parameter
 *Description: count bytes
 *Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
