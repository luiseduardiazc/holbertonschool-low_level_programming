#include "holberton.h"
/**
 *reverse_array - function that compares two strings
 *@a: pointer parameter"
 *@n: pointer parameter"
 *Description: This function compare two strings
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int *pStart = a;
	int *pEnd = a + (n - 1);

	while (pEnd > pStart)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;
		pStart++;
		pEnd--;
	}
}
