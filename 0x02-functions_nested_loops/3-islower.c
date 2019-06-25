#include "holberton.h"
#include <ctype.h>
/**
 *_islower - evaluate lower letter
 *@c: it is  int parameter
 *Description: This function evaluate if some letter is lower
 *Return: 0 upon successful completion
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

