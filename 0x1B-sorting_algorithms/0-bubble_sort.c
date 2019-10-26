#include "sort.h"

/**
 * bubble_sort - bubble_sort
 * @array: array
 * @size: size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	int temp;

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
