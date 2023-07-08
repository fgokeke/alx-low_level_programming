#include <stdio.h>
#include "main.h"

/**
 * main - to count the number of arguments
 * @argc: counts the number of arguments.
 * @argv: points to the strings containing the arguments
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	{
	printf("%d\n", argc - 1);
	}
	(void)argv;

	return (0);
}
