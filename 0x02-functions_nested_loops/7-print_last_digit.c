#include "holberton.h"
/**
 *print_last_digit - evaluate las digit
 *@n: it is  int parameter
 *Description: This function get las digit from some number
 *Return: las digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n *= -1;
	}
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
