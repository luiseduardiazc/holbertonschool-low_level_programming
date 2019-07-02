#include "holberton.h"
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 * @s: pointer char
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
