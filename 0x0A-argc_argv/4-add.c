#include <stdio.h>
#include <stdlib.h>
/**
 *main- function main
 *@argc: int argc
 *@argv: char pointer to pointer argv
 *Description: function main
 *Return: int
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc < 1)
		printf("%d\n", 0);

	while (argc-- && argc > 0)
	{
		if (!atoi(*++argv))
		{
			printf("%d\n", 0);
			exit(EXIT_SUCCESS);
		} else
		{
			sum += atoi(*argv);
		}
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
