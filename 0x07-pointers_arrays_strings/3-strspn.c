#include "holberton.h"
/**
 *_strspn- locates a character in a string
 *@s: pointer parameter
 *@accept: pointer parameter
 *Description: count bytes
 *Return: unsigned int count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int flag;
	char *aux = accept;

	while (*s != 0)
	{
		flag = 0;

		while (*accept != 0)
		{
			if (*s == *accept)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = aux;
		if (flag == 0)
		{
			break;
		}
	}
	return (count);
}
