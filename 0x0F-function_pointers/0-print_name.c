#include <stdlib.h>
/**
 *print_name - print name
 *@name: char parameter
 *@f: function pointer
 *Description: function that prints name
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
