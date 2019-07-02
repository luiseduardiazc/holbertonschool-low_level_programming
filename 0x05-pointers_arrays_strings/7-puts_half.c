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
 *puts_half - check the code for Holberton School students.
 *@s: pointer parameter
 *Description: This function prints pair number
 *Return: Always Nothing.
 */
void puts_half(char *s)
{
	int i;
	int len;

	if (_strlen(s) % 2 == 0)
	{
		len = _strlen(s) / 2;
	} else
	{
		len = (_strlen(s) - 1) / 2;
	}

	for (i = 0 ; i <= _strlen(s) - 1; i++)
	{
		if (i >= len)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
