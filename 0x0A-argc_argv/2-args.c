#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments.
 * @argv: the pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
