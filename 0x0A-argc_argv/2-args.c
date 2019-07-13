#include <stdio.h>
#include <stdlib.h>
/**
 *main - function main
 *@argc: int argc
 *@argv: char pointer to pointer argv
 *Description: function main
 *Return: int
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
