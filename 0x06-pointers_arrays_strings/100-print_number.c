#include "holberton.h"
/**
 *print_number - print numbers
 *@n: int parameter
 *Description: this function print numbers
 *Return: Nothing
 */
void print_number(int n)
{
	int aux;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar('0');
	} else if (n > 0 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	} else if (n >= 100 && n <= 999)
	{
		aux = n / 10;
		_putchar(aux / 10 + '0');
		_putchar(aux % 10 + '0');
		_putchar(n % 10 + '0');
	} else if (n >= 1000 && n <= 9999)
	{
		aux = n / 100;
		n = n % 100;
		_putchar(aux / 10 + '0');
		_putchar(aux % 10 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
