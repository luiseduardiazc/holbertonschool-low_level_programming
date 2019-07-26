#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @separator: char pointer
 * @n: num of parameters
 * Return: Noting
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *s;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
		{
			printf("%s", separator);
		}
		s = va_arg(arguments, char *);
		if (s)
		{
			printf("%s", s);
		} else
		{
			printf("(nil)");
		}
	}
	printf("\n");
}
