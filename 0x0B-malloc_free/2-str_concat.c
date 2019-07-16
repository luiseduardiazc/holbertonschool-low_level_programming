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
 *str_concat - copy pointer
 *@s1: pointer parameter
 *@s2: pointer parameter
 *Description: function for copy pointer
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = _strlen(s1) + _strlen(s2);
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		ar[i] = s1[i];
	}

	for (j = 0; j <= _strlen(s2); j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i + 1] = '\0';
	return (ar);
}
