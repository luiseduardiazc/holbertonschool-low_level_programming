#include "holberton.h"
/**
 *_strcmp - function that compares two strings
 *@s1: pointer parameter"
 *@s2: pointer parameter"
 *Description: This function compare two strings
 *Return: return int
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
