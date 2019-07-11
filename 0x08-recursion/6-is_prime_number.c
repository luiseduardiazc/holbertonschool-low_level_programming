#include "holberton.h"
/**
 *prime_number - function sqr
 *@n: int parameter
 *@i: int parameter
 *Return: 0 if number is prime 1 not prime
 */
int prime_number(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime_number(n, i + 1));
}
/**
 *is_prime_number - prime number
 *Description: function that validate if number is prime or not
 *@n: int parameter
 *Return: int  0 or 1
 */

int is_prime_number(int n)
{
	int cont = 2;

	return (prime_number(n, cont));
}
