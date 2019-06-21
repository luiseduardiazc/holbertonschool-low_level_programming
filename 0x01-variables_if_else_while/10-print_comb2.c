#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j;
	int aux = 48;

	for (j = 0; j < 10; j++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(aux);
			putchar(n);
			if (aux == 57 && n == 57)
			{
				continue;
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
		aux++;
	}
	putchar('\n');
	return (0);
}
