#include "holberton.h"
/**
 *_islower - evaluate lower letter
 *@c: it is  int parameter
 *Description: This function evaluate if some letter is lower
 *Return: 0 upon successful completion
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}

