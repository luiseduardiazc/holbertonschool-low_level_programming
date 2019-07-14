#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main- function main
 *@argc: int argc
 *@argv: char pointer to pointer argv
 *Description: function main
 *Return: int
 */
int main(int argc, char **argv)
{
	int change, cont = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (change % 25 >= 0)
	{
		cont += change / 25;
		change = change % 25;
	}
	if (change % 10 >= 0)
	{
		cont += change / 10;
		change = change % 10;
	}
	if (change % 5 >= 0)
	{
		cont += change / 5;
		change = change % 5;
	}
	if (change % 2 >= 0)
	{
		cont += change / 2;
		change = change % 2;
	}
	if (change % 1 >= 0)
	{
		cont += change / 1;
	}
	printf("%d\n", cont);
	return (0);
}
