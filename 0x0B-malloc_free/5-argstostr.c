#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - concatenate
 *@ac: int parameter
 *@av: double pointer parameter
 *Description: This function concatenate params of **av
 *Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *aux;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			count++;
		}
		count++;
	}
	count += 1;

	aux = malloc(sizeof(char) * count);
	string = aux;

	if (aux == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			*aux = av[i][j];
			aux++;
		}
		*aux = '\n';
		aux++;
	}

	return (string);
}
