#include <stdlib.h>
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
 *_strcpy - reset number
 *Description: This function copy elements from src to dest
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
 *strtow - free
 *@str: point parameter
 *Description: function free
 *Return: Nothing
 */
char **strtow(char *str)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * _strlen(str));
	_strcpy(arr, str);
	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] == '\t')
		{
			printf("tab");
		}
	 printf("%c", str[i]);
	}
	return (NULL);
}
