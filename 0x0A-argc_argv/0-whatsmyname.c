#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: to count the number of command line arguments.
 * @argv: the arrays pointing to the arguments
 *
 * Return: Always 0.
 */
int __attribute__ ((unused)) main(int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
{
	printf("%s\n", argv[0]);

	return (0);
}
