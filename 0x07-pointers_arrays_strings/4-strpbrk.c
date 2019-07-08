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
	char *aux = accept;

	while (*s != 0)
	{
		while (*accept != 0)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = aux;
		s++;
	}
	return (s);
}
