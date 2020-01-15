#include "search.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - linear_search
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: return index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
