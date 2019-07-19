#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	char *result;
	int mult = 0;

	result = (char *) malloc(39 * sizeof(char));
	if (result == NULL)
	{
		exit(98);
	}
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	num_a = *(argv + 1);
	num_b = *(argv + 2);

	/**
	*if (!(isdigit(num_a) && isdigit(num_b)))
	*{
	*	printf("Error\n");
	*	exit(98);
	*}
	*/
	mult =  atoi(num_a) * atoi(num_b);
	sprintf(result, "%d", mult);

	while (*result != '\0')
	{
		_putchar(*result);
		result++;
	}
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
