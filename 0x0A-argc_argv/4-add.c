#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *isNumeric - checks numbers
 *@s: conts char pointer
 *Description: This function checks for numbers
 *Return: 1 for numbers 0 for alpha
 */
int isNumeric(const char *s)
{
	char *p = NULL;

	if (s == NULL || *s == '\0' || isspace(*s))
		return (0);
	strtod (s, &p);
	return (*p == '\0');
}
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: numbers to add
 * Description: this is the main function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, val, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			char *value = argv[i];
			if (!isNumeric(value))
			{
				printf("%s\n", "Error");
				return (1);
			}
			val = atoi(argv[i]);
			sum += val;
		}
		printf("%d\n", sum);
	}
	return (0);
}
