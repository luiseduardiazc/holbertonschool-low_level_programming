#include "holberton.h"
/**
 *more_numbers - numbers, from 0 to 14
 *Description: numbers, from 0 to 14
 *Return: Nothing
 */
void more_numbers(void)
{
	int i, j, first, last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				first = j / 10;
				last = j % 10;
				_putchar(first + '0');
				_putchar(last + '0');
			} else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
