#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *create_file - read_textfile
 *@filename: name file to be open
 *@text_content: content to write
 *Description: this function create file
 *Return: 1 if success or  -1
 */
int create_file(const char *filename, char *text_content)
{
	int is_open
		size_t s_success;

	if (!filename)
	{
		return (-1);
	}
	is_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (is_open == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		write(is_open, "", 1);
		close(is_open);
		return (1);
	}
	is_success = write(is_open, text_content, _strlen(text_content));
	if (is_success == -1)
		close(is_open), return (-1);

	close(is_open);
	return (1);
}
