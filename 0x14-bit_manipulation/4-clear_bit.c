#include "holberton.h"
/**
 *clear_bit - clear bit
 *Description:  function that sets the value of a bit to 0 at a given index
 *@n: number
 *@index: int index
 *Return: 1 if it works and -1 if it fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_num = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	set_num = (1 << index);
	*n = *n & ~set_num;
	return (1);
}
