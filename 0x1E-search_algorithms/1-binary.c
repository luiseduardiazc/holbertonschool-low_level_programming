#include "search.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low: low index
 * @high: high index
 * Return: Nothing
 */
void print_array(int *array, int low, int high)
{
	int i;

	i = low;
	printf("Searching in array: ");
	while (array && i <= high)
	{

		if (i > low)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}

/**
 * search - implement binary_search recursion
 * @array: array
 * @low: low index
 * @high: high index
 * @value: value to find
 * Return: int
 *
 */
int search(int *array, int low, int high, int value)
{
	int mid;

	if ((low > high) || (array == NULL))
		return (-1);
	print_array(array, low, high);
	mid = (low + high) / 2;
	if (value > array[mid])
		return (search(array, mid + 1, high, value));
	if (value < array[mid])
		return (search(array, low, mid - 1, value));

	return (mid);
}

/**
 * binary_search - implement binary_search
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (search(array, 0, size - 1, value));
}
