#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line
 *@n: int parameter
 *Description: draws a diagonal line
 *Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i + 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
