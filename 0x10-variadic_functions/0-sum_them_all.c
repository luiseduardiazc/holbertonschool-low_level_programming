#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of parameters
 * Return: int sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	return (sum);
}
