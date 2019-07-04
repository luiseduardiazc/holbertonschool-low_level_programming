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
 *_strcat - similar function: strcat
 *@dest: pointer parameter whit string "Hello "
 *@src: pointer parameter whit string "World!\n"
 *Description: This function merge two strings
 *Return: "Hello World!"
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int n = _strlen(src);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
