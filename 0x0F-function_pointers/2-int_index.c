#include <stdlib.h>
/**
 *int_index - int_index
 *@array: array pointer
 *@size: size of array
 *@cmp: function pointer
 *Description: function that compare elements
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, no_matches = 1;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size && no_matches == 1; i++)
		{
			if (cmp(array[i]))
			{
				no_matches = 0;
			}
		}
		if (no_matches)
		{
			return (-1);
		}
	i = i - 1;
	}
	return (i);
}
