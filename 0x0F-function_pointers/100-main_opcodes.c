#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of the main function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, bytes;
	int (*addrs)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)addrs;
		printf("%.2x", opcode);
		if (i == bytes - 1)
		{
			continue;
		}
		printf(" ");
		addrs++;
	}
	printf("\n");

	return (0);
}
