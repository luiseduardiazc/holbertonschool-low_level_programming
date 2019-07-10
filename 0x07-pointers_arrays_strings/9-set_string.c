#include "holberton.h"
/**
 *set_string - sets the value of a pointer to a char
 *@s: double pointer
 *@to: pointer parameter
 *Description: sets the value of a pointer to a char
 *Return: pointer or null
 */
void set_string(char **s, char *to)
{
	*s = to;
}
