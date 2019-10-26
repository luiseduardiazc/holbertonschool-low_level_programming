#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j;
	int temp;
	while (i < size)
	{
		for (j = i + 1; j < size; j++) {
			if(array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
				i = 0;
				break;
			}
			i++;
		}
	}
}