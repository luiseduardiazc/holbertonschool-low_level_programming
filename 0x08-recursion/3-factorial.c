#include "holberton.h"
/**
 *factorial - print factorial
 *Description: This function print facttorial
 *@n: pointer parameter
 *Return: int  factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
