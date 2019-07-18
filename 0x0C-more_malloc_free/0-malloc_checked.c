#include <stdlib.h>
/**
 *malloc_checked - allowed memory
 *@b: unsigned int parameter
 *Description: function that allocates memory using malloc
 *Return: pointer if fails return 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *) malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
