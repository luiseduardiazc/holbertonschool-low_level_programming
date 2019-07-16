#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - copy pointer
 *@str: pointer char parmeter
 *Description: function for copy pointer
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(strlen(str) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		ar[i] = *str;
		str++;
		i++;
	}
	return (ar);
}
