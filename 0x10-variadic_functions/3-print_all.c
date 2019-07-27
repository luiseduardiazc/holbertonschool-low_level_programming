#include "variadic_functions.h"
/**
 * print_all - print_strings
 * @format: format pointer
 * Return: Noting
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0;
	double _double;
	int flag = 0, value = 0;
	char *s;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{

			case 'c':
				value = va_arg(arguments, int);
				printf("%c", value);
				break;
			case 'i':
				value = va_arg(arguments, int);
				printf("%d", value);
				break;
			case 'f':
				_double = va_arg(arguments, double);
				printf("%f", (float)_double);
				break;
			case 's':
				s = va_arg(arguments, char *);
				if (!s)
					s = "(neil)";
				printf("%s", s);
				break;
			default:
				flag = 1;
		}
		if (flag == 0 && i != strlen(format) - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
