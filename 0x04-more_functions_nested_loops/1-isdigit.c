#include "holberton.h"
/**
 *_isdigit - evaluate digit
 *@c: int parameter
 *Description: function that checks for a digit (0 through 9)
 *Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
