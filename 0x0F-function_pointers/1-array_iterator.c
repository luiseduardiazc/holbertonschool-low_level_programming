#include <stdlib.h>
/**
 *array_iterator - array_iterator
 *@array: array pointer
 *@size: size of array
 *@action: function pointer
 *Description: function prints elemnt by element of array
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
