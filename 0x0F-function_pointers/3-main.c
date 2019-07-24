#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main program
 * @argc: count of arguments
 * @argv: array arguments
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int (*functionPtr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[1] == 0) && (strcmp(argv[2], "/") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (

			(strcmp(argv[2], "+") &&
			 strcmp(argv[2], "-") &&
			 strcmp(argv[2], "*") &&
			 strcmp(argv[2], "/") &&
			 strcmp(argv[2], "%")
			)
	   )
	{
		printf("Error\n");
		exit(98);
	}

	functionPtr = get_op_func(argv[2]);
	printf("%d\n", functionPtr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
