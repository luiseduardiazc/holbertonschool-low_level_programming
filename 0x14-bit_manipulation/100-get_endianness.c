#include "holberton.h"
/**
 *get_endianness - get endianness
 *Description: function that checks the endianness
 *Return: 1 for little endian, 0 big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	return (0);
}
