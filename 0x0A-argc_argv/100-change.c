#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *is_same_value- function
 *@value: int parameter
 *@coins: int pointer
 *Description: function evaluate the same value to coins
 *Return: 1 if values are equals 0 other else
 */
int is_same_value(int value, int *coins)
{
	unsigned int i = 0;

	for (i = 0; i < (sizeof(coins) / sizeof(int)); i++)
	{
		if (coins[i] == value)
		{
			return (1);
		}
	}
	return (0);
}

/**
 *main- function main
 *@argc: int argc
 *@argv: char pointer to pointer argv
 *Description: function main
 *Return: int
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	unsigned int i;
	int change = 0, sum = 0, cont = 0;

	argv++;

	if (argc != 2 || !atoi(*argv))
		exit(EXIT_FAILURE);

	change = atoi(*argv);

	if (is_same_value(change, coins))
	{
		printf("%d\n", 1);
		exit(EXIT_SUCCESS);
	}

	for (i = 0; i < (sizeof(coins) / sizeof(int)); i++)
	{
		while (sum < change)
		{
			sum = sum + coins[i];
			cont++;
		}
		if (sum == change)
		{
			printf("%d\n", cont);
			exit(EXIT_SUCCESS);
		} else if (sum > change)
		{
			sum = sum - coins[i];
			cont--;
		}
	}

	exit(EXIT_SUCCESS);
}
