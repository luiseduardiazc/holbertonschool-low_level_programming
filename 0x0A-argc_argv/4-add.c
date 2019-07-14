#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print add
 * @argv: arguments
 * @argc: number of arguments
 * Description: main function
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int sum = 0, val = 0, i = 1;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (1);
	}
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
