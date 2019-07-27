#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _strlen - calculate len
 * @s: char pointer
 *
 * Return: len
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
 * print_all - print_strings
 * @format: format pointer
 * Return: Noting
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, flag = 0;
	double _double;
	char *s;

	while (format == NULL)
		return;
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{

			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
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
		if (flag == 0 && i != _strlen((char *)format) - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
