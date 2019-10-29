#include "sort.h"

/**
 * shell_sort - shell_sort
 * @array: array
 * @size: size of array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h, gap, i, j;
	size_t swap = 0;
	int temp;

	if (size < 2)
		return;
	h = 1;
	/* manage sequence of intervals */
	while (h < (size / 3))
		h = (h * 3) + 1;

	for (gap = h; gap > 0; gap /= h)
	{
		swap = 0;
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
				/* flag for manage changes and print array */
				swap = 1;
			}
			array[j] = temp;
		}
		if (swap)
			print_array(array, size);
	}
}
