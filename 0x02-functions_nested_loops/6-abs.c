#include "holberton.h"
/**
 *_abs - Decides if number is less than 0
 *@n: some number
 *
 *Description: This function change the number sing
 *Return: n if number is greater 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
