#include "holberton.h"
/**
 *more_numbers - numbers, from 0 to 14
 *Description: numbers, from 0 to 14
 *Return: Nothing
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				num = j / 10;
				_putchar(num + '0');
			}
			num = j % 10;
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
