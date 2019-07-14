#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print add
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int sum, val, i;

	sum = 0;
	val = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (isdigit(*argv[i]))
		{
			val = atoi(argv[i]);
			sum += val;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
