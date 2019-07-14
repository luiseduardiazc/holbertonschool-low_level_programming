#include <stdio.h>
#include <stdlib.h>

/**
 *main - function main
 *@argc: int argc
 *@argv: char pointer to pointer argv
 *Description: function main
 *Return: int
 */
int main(int argc, char **argv)
{
	char *num_a;
	char *num_b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	num_a = *(argv + 1);
	num_b = *(argv + 2);
	printf("%d\n", atoi(num_a) * atoi(num_b));
	exit(EXIT_SUCCESS);
}
