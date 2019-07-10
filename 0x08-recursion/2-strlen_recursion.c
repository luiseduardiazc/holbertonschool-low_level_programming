#include "holberton.h"
/**
 *_strlen_recursion - print string in reverse
 *Description: This function push to number int a pointer parameter
 * @s: pointer parameter
 *Return: Always Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
