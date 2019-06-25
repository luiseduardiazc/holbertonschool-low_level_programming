#include "holberton.h"
/**
 *times_table - print numbers
 *Description: This function print numbers in table
 *Return: Nothing
 */
void times_table(void)
{
	int i, j, aux, first, last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{

			aux = j * i;
			if (aux >= 10)
			{
				first = aux / 10;
				last = aux % 10;
				_putchar(first + '0');
				_putchar(last + '0');
			} else
			{
				if (j != 0 )
				{
					_putchar(' ');	
				}
				_putchar(aux + '0');
			}
			
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	} 
}
