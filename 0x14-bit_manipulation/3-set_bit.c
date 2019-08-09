#include "holberton.h"
/**
 *set_bit - set bit
 *Description: set bit at index position
 *@n: number
 *@index: int index
 *Return: 1 if it works and -1 if it fail
 */
int set_bit(unsigned long int n, unsigned int index)
{
	unsigned int set_num = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	set_num = (1 << index);
	*n = *n | num;
	return (1);
}
