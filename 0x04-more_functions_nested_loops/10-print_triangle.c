#include "holberton.h"
/**
 *print_triangle - prints a square
 *@size: int parameter
 *Description: prints a triangle
 *Return: Nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}

			_putchar('\n');
		}
	}
}