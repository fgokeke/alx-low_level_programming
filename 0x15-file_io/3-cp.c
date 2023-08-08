#include "main.h"

/**
 * close_fd - closes an open file.
 * @fd: the file descriptor of the file.
 *
 * Return: Nothing.
 */
void close_fd(int fd)
{
	int i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buf - to create a 1024 bytes buffer for reading
 * the file.
 * @file: the file to be read.
 *
 * Return: the buffer.
 */
char *create_buf(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main -  a program that copies the
 * content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	buffer = create_buf(argv[2]);
	bytes_read = read(fd_from, buffer, 1024);
	if (fd_from == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to file %s\n", argv[2]);
			exit(99);
		}
		bytes_read = read(fd_from, buffer, 1024);
	}
	free(buffer);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
