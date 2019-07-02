#include "holberton.h"
/**
 *swap_int - reset number
 *Description: This function push to number int a pointer parameter
 * @a: pointer parameter
 * @b: pointer parmeter
 *Return: Always Nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
