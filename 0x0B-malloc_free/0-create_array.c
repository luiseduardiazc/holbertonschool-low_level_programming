#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function create an array
 *@size: insigned int size parameter
 *@c: char parameter
 *Description: Create an array initialized whit c character
 *Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
