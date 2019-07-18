#include <stdlib.h>
/**
 *_calloc - allowed memory
 *@nmemb: unsigned int parameter
 *@size: unsigned int parameter
 *Description: function that allocates memory for array
 *Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
/**
 *array_range - array range
 *@min: int parameter
 *@max: int parameter
 *Description: function that allocates memory for array range
 *Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = _calloc(max + 1, sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
