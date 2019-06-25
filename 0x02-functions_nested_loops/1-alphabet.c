#include "holberton.h"
/**
 *print_alphabet - prints the letters from a to z in lowercase
 *
 *Return: 0 upon successful completion
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

