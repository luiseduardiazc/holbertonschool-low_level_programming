#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 * @s: pointer char
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
	ar = malloc(_strlen(str) * sizeof(char));
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
