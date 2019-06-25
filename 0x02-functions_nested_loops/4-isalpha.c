#include "holberton.h"
/**
 *_isalpha - Decides if a character is alpha or not
 *@c: arbitrary character
 *
 *Description: This function return 1 if character is alpha
 *Return: 1 if alpha, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}

