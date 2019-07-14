#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: numbers to add
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, val, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	val = atoi(argv[i]);
	sum += val;
	}
	printf("%d\n", sum);
	return (sum);
}
