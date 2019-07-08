#include "holberton.h"
/**
 *_memset - copy memory adress
 *@s: pointer char parameter
 *@b: char parameter
 *@n: undigned parameter n
 *Description: copy memory
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *s1 = s;

	for (i = 0; i < n; i++)
	{
		s1[i] = b;
	}
	return (s);
}
