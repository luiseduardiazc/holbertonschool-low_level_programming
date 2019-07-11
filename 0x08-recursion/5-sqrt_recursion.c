#include "holberton.h"
/**
 *cal_sqr - function sqr
 *@n: int parameter
 *@i: int parameter
 *Return: int sqrt
 */
int cal_sqr(int n, int i)
{
	if ((n / i) == i && (n % i) == 0)
	{
		i = i;
		return (i);
	} else if (n < 0)
	{
		return (-1);
	} else if (n == i)
	{
		return (-1);
	}
	i++;
	return (cal_sqr(n, i));
}
/**
 *_sqrt_recursion - sqrt
 *Description: sqrt function
 *@n: int parameter
 *Return: int  sqrt
 */

int _sqrt_recursion(int n)
{
	int cont = 1;

	return (cal_sqr(n, cont));
}
