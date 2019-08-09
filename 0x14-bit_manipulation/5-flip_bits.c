#include "holberton.h"
/**
 *flip_bits - flip bits
 *Description: This function flip to get from one number to another
 *@n: number for flip
 *@m: int m
 *Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned long int operation_xor = n ^ m;

	while (operation_xor)
	{
		flip += (operation_xor & 1);
		(operation_xor >>= 1);
	}

	return (flip);
}
