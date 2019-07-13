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
	int cont = 0;
	/** for not used variable argv**/
	(void)argv;

	while (argc-- && argc > 0)
		cont++;
	printf("%d\n", cont);
	exit(EXIT_SUCCESS);
}
