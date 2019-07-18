#include <stdlib.h>
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
 *string_nconcat - concatenates two strings
 *@s1: char pointer parameter
 *@s2: char pointer parameter
 *@n: unsigned int
 *Description: concatenates two strings
 *Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if ((int) n >= _strlen(s2))
	{
		n = _strlen(s2);
	}

	str = malloc(_strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	/** copy s1 to str */
	for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
	{
		str[j] = s1[i];
	}
	/** concatenate s2 to str */
	for (i = 0; i != n; i++, j++)
	{
		str[j] = s2[i];
	}
	/** end null caracter */
	str[j] = '\0';

	return (str);
}
