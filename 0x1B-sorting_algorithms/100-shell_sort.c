#include "sort.h"
/**
 * shell_sort - shell_sort
 * @array: array
 * @size: size
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	unsigned int h, gap, i, j, temp;

	if (size < 2)
	{
		return;
	}
	h = 1;
	/* manage sequence of intervals */
	while (h < size)
	{
		h = 3 * h + 1;
	}

	h = (h - 1) / 3;
	for (gap = h; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > (int)temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
