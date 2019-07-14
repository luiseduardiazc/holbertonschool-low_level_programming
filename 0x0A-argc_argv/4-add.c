#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print add
 *
 * @argc: arguments
 * @argv: number of arguments
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i])) /* not numeric */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
