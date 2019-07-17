#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *_strcat - similar function: strcat
 *@dest: pointer parameter whit string "Hello "
 *@src: pointer parameter whit string "World!\n"
 *Description: This function merge two strings
 *Return: "Hello World!"
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int n = _strlen(src);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
/**
 *argstostr - concatenate
 *@ac: int parameter
 *@av: double pointer parameter
 *Description: This function concatenate params of **av
 *Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, a;
	int cont = 0;
	char enter[] = {'\n'};

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cont++;
		}
	}
	s = malloc(sizeof(char) * (cont * ac));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		_strcat(s, av[a]);
		_strcat(s, enter);
	}
	return (s);
}
