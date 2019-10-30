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
 * partition - Takes last element as pivot
 * @arr: Sorted array
 * @min: The first element
 * @last: The last element
 * @size: size
 * Return: Nothing
 */
int partition(int *arr, int min, int last, size_t size)
{
	int pivot;
	int i = (min);
	int j;

	pivot = arr[last];
	for (j = min; j < last; j++)
	{
		if (arr[j] < pivot)
		{

			swap(&arr[i], &arr[j]);


			if (i != j)
				print_array(arr, size);

			i++;

		}
	}

	swap(&arr[i], &arr[last]);
	if (i != j)
		print_array(arr, size);

	return (i);
}

/**
 * quick_sort_array - quick_sort_array
 * @arr: arr
 * @min: min
 * @last: last
 * @size: size
 * Return: Nothing
 */
void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int pivot;

	if (min < last)
	{
		pivot = partition(arr, min, last, size);
		quick_sort_array(arr, min, (pivot - 1), size);
		quick_sort_array(arr, (pivot + 1), last, size);
	}
}

/**
 * quick_sort - quick_sort
 * @array: array
 * @size: size
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}
