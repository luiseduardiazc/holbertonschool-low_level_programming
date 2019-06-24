#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _print_alphabet - print letters of alphabet in lower case
 *
 * Return: Noting
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
}
/**
 * print_alphabet_x10 - print 10 lines alphabet
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
/**
 *_islower - evaluate a character
 *
 * @c the character to evaluate
 * 
 * Return: 1 on the lowercase 0 to other 
*/
int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	}
	return (0);	
}
/**
 * _isalpha - it evaluate a character
 *
 * @c character to be evaluate
 *
 * Return: 1 if @c is alpha otherwise return 0
 */
int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	return (0);
}
/**
 * print_sign - print and return value 
 *
 * @n value tu be evaluate
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0, 0 for otherwaise 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
