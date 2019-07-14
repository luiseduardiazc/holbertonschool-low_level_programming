#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: numbers to add
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		argv++;
		if (!atoi(*argv) || atoi(*argv) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);
}
