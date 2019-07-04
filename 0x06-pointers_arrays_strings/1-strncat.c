#include "holberton.h"
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
 *_strncat - similar function: strcat
 *@dest: pointer parameter whit string "Hello "
 *@src: pointer parameter whit string "World!\n"
 *@n: int parameter
 *Description: This function merge two strings
 *Return: "Hello WWorld!"
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
