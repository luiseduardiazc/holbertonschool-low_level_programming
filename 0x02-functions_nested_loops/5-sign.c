#include "holberton.h"
/**
 *print_sign - Decides if a number is grather, less or equal 0
 *@n: arbitrary character
 *
 *Description: This print a sing and return number
 *Return: 1 if n >0, 0 if n ==0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

