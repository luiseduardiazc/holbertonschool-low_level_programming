#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal.
 *@n: int parameter
 *Description: draws a straigth line
 *Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
