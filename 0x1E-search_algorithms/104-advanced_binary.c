#include "search.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low: low index
 * @high: high index
 * @size: original size of array
 * Return: Nothing
 */
void print_array(int *array, int low, int high, int size)
{
	int i;

	i = low;
	if (high == size)
		high = high - 1;
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
 * @size: original size of array
 * Return: int
 *
 */
int search(int *array, int low, int high, int value, int size)
{
	int mid;

	if ((low >= high) || (array == NULL))
		return (-1);
	print_array(array, low, high, size);
	mid = (low + high) / 2;
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (search(array, mid + 1, high, value, size));
	if (value < array[mid])
		return (search(array, low, mid - 1, value, size));

	return (mid);
}

/**
 * advanced_binary - implement advanced_binary
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (search(array, 0, size, value, size));
}
