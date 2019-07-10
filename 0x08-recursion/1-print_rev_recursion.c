#include "holberton.h"
/**
 *_print_rev_recursion - print string in reverse
 *Description: This function push to number int a pointer parameter
 * @s: pointer parameter
 *Return: Always Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
