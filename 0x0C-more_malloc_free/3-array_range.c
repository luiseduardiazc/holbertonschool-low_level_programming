#include <stdlib.h>
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
	int i = 0, cant = 0;

	if (min > max)
	{
		return (NULL);
	}
	cant = max - min;
	ptr = malloc((cant + 1) * sizeof(int));

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
