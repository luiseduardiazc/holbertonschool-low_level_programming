#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: Array of integers to sort
 * @size: The size of the array to be sorted
 * Return: Sorted array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	if (array == NULL || size == 0)
		return;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
