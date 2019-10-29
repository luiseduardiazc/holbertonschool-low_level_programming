#include "sort.h"

/**
 * swap - Function that swap two variables.
 * @a: integer to swap
 * @b: integer to swap
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: The function's parameter
 * @size: The function's parameter
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(&array[min], &array[i]);
		if (i != min)
			print_array(array, size);
	}
}


