#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

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
 *Description: This function merge n bytes from src
 *Return: pointer string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
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
	unsigned int i = 0;

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
 *string_nconcat - concatenates two strings
 *@s1: char pointer parameter
 *@s2: char pointer parameter
 *@n: unsigned int
 *Description: concatenates two strings
 *Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *aux;
	int size = 0;
	unsigned int words = n;

	if (words >= _strlen(s2))
	{
		words = _strlen(s2);
	}

	size = _strlen(s1) + words + 1;
	str = malloc(sizeof(char) * size);
	aux = str;

	if (str == NULL)
	{
		return (NULL);
	}

	_strcpy(aux, s1);
	_strncat(aux, s2, words);

	return (str);
}
