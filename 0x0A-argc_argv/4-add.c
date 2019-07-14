#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print add
 * @argv: arguments
 * @argc: number of arguments
 * Description: main function
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int sum, j, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (isdigit(*(*(argv + i) + j) == 0))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = atoi(*(argv + i));
	}
	printf("%d\n", sum);
	return (0);
}
