#include <stdio.h>
/**
 *less_than_98 - function print numbers
 *@num: it is  int parameter
 *Description: This function loop in numbers less than 98 and print it
 *Return: Nothing
 */
void less_than_98(int num)
{
	int i;

	for (i = num + 1; i <= 98; i++)
	{
		printf("%c %d", ',', i);
	}
}
/**
 *greater_than_98 - function print numbers
 *@num: it is  int parameter
 *Description: This function loop in numbers greater than than 98 and print it
 *Return: Nothing
 */
void greater_than_98(int num)
{
	int j;

	for (j = num - 1; j >= 98; j--)
	{
		printf("%c %d", ',', j);
	}
}
/**
 *print_to_98 - function manage functions less_than_98 and greater_than_98
 *@n: it is  int parameter
 *Description: This function manage other functions
 *Return: Nothing
 */
void print_to_98(int n)
{

	printf("%d", n);
	if (n != 98)
	{
		if (n > 98)
		{
			greater_than_98(n);
		} else if (n < 98)
		{
			less_than_98(n);
		}
	}
	printf("\n");
}
