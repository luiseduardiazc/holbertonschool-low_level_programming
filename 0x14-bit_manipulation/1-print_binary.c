#include "holberton.h"
/**
 *print_binary - print binary
 *Description: convert decimal to binary
 *@n: number to be convert
 *Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int x = n;

	if (n == 0)
		_putchar('0');

	while (x != 0)
	{
		/**
		* This operation reduces length
		* of every sequence of 1s by one.
		*/
		x = x >> 1;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		unsigned long int var = n >> i;

		if (var & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
