#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isnumber - test input is a number or not
 *
 * @s: pointer  number to check
 * Return: 1 if number, 0 if not
 */
int isnumber(char *s)
{
	char *p = NULL;

	if (s == NULL || *s == '\0' || isspace(*s))
		return (0);
	strtod(s, &p);
	return (*p == '\0');
}
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
		if (isnumber(argv[i]))
		{
			val = atoi(argv[i]);
			if (val > 0)
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
