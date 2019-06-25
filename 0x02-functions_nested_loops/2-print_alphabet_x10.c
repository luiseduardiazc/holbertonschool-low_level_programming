#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet, in lowercase
 *
 *Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
		 _putchar('\n');
	}
}
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
}
