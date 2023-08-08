#include "main.h"

/**
 * exit_error - to print the error message
 * and exit with a particular code.
 * @error_code: the code to exit with.
 * @error_message: the error message to be printed.
 *
 * Return: Nothing.
 */
void exit_error(int error_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
	exit(error_code);
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
	const char *file_from, *file_to;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_error(97, "Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_error(98, "Can't read from file argv[1]");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error(99, "Can't write to file argv[2]");

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		exit_error(101, "memory allocation failed");

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			exit_error(99, "Can't write to file argv[2]");
	}
	if (bytes_read == -1)
		exit_error(98, "Can't read from file argv[1]");

	free(buffer);
	if (close(fd_from) == -1)
		exit_error(100, "Can't close fd fd_from");

	if (close(fd_to) == -1)
		exit_error(100, "Can't close fd fd_to");

	return (0);
}
