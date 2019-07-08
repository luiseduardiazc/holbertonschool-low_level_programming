#include "holberton.h"
/**
 *_memcpy - copy memory adress
 *@dest: pointer char parameter
 *@src: char parameter
 *@n: undigned parameter n
 *Description: copy memory
 *Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	char *pEnd = dest;

	while (n)
	{
		*pEnd = src[i];
		pEnd++;
		i++;
		n--;
	}
	return (dest);
}
