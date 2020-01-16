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
	int mid = 0;

	print_array(array, low, high);
	mid = (high + low) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (high == low)
		return (-1);
	else if (array[mid] >= value)
		return (search(array, low, mid, value));
	else if (array[mid] < value)
		return (search(array, mid + 1, high, value));
	return (-1);
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
	if (array == NULL)
		return (-1);
	return (search(array, 0, size - 1, value));
}
