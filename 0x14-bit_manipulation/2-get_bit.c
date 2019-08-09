#include "holberton.h"
/**
 *get_bit - get bit
 *Description: Return position
 *@n: number
 *@index: int index
 *Return: position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	return (0);
}
