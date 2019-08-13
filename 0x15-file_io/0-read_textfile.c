#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *read_textfile - read_textfile
 *@filename: name file to be open
 *@letters: size letters to read
 *Description: this function read a file
 *Return: num of characteres printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t number_letters = 0;
	int is_open;
	char *buff;

	if (!filename)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}

	is_open = open(filename, O_RDONLY);
	if (is_open == -1)
	{
		free(buff);
		return (0);
	}

	number_letters = read(is_open, buff, letters);

	if (number_letters == -1)
	{
		close(is_open);
		free(buff);
		return (0);
	}

	write(STDOUT_FILENO, buff, number_letters);

	close(is_open);
	free(buff);
	return (number_letters);
}
