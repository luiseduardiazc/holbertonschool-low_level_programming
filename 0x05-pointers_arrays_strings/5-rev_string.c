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
 *rev_string - check the code for Holberton School students.
 *@s: pointer parameter
 *Description: This function prints a string reverse
 *Return: Always Nothing.
 */
void rev_string(char *s)
{
char *pInit = s;
char *pEnd = pInit + _strlen(s) - 1;
while (pEnd > pInit)
{
	char temp = *pInit;
	*pInit = *pEnd;
	*pEnd = temp;

	pInit ++;
	pEnd--;
}
}
