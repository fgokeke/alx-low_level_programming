#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content:  a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, str_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[str_length])
	{
		str_length++;
	}
	if (str_length > 0)
	{
		bytes_written = write(fd, text_content, str_length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
