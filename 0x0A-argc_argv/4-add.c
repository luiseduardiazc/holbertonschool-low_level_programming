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
	int sum = 0, i = 1;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (1);
	}
	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
