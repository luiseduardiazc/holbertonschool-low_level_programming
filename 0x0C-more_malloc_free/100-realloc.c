#include <stdlib.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *_strcpy - reset number
 *Description: This function get an array and print n elements
 *@dest: pointer char
 *@src: int parameter
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		char temp = src[i];
		*dest = temp;
		dest++;
		i++;
	}
	return (src);
}
/**
 *_realloc - realloc
 *@ptr: pointer
 *@old_size: old_size memory
 *@new_size: new_size memory
 *Description: function realloc memory
 *Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
