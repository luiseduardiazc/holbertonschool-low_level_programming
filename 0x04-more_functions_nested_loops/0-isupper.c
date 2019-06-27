#include "holberton.h"
/**
 *_isupper - prints the alphabet, in lowercase
 *@c: int parameter
 *Description: This function checks for uppercase character
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
