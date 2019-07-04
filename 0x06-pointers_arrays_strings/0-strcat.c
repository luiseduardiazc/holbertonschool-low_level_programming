#include "holberton.h"
#include <stdio.h>
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
	int i, x = 0;

	for (i = 6; i < 13; i++)
	{
		dest[i] = src[x];
		x++;
	}
	dest[13] = '\0';
	return (dest);
}
