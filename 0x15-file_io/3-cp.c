#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
 * check_opened - check_opened_files
 * @file_from: parameter
 * @file_to: parameter
 * @from_name: parameter
 * @to_name: parameter
 * Return: nothing
 */
void check_opened(int file_from, int file_to, char *from_name, char *to_name)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", to_name);
		exit(99);
	}
}
/**
 * main - check the code for Holberton School students.
 * @ac: count
 * @av: values
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from_is_open, file_to_is_open, n;
	char buff[20480];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from_is_open = open(*(av + 1), O_RDONLY);
	file_to_is_open = open(*(av + 2), O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_opened(file_from_is_open, file_to_is_open, av[1], av[2]);

	while ((n = read(file_from_is_open, buff, 1024)) != 0)
		;

	if (write(file_to_is_open, buff, _strlen(buff)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", *(av + 2));
		exit(99);
	}
	if (close(file_from_is_open) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_is_open);
		exit(100);
	}
	if (close(file_to_is_open) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_is_open);
		exit(100);
	}
	return (0);
}
