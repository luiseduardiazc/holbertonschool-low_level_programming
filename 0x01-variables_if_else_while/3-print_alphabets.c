#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	for (n = 65; n <= 90; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
