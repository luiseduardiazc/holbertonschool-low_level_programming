#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer char parameter
 *@c: char parameter
 *Description: locates a character in a string
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
