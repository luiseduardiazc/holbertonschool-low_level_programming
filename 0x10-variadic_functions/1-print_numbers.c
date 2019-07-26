#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: char pointer
 * @n: num of parameters
 * Return: Noting
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(arguments, int));
	}
	printf("\n");
}
