#include "holberton.h"
#include <stdio.h>
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
 *_pow_recursion - pow
 *Description: pow function
 *@x: int parameter
 *@y: int parameter
 *Return: int  pow
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	} else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - binary to uint
 * @b: pointer char b
 * Description: This function convert to binary
 * Return: binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, decimal = 0, mult = 1;

	if (!b)
	{
		return (0);
	}

	for (i = _strlen((char *)b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			decimal += mult;
		}
		mult = mult * 2;
	}
	return (decimal);
}
