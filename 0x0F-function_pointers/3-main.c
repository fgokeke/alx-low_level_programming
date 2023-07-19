#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - to perform arithmetic operations on arguments.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*oprtn)(int, int);
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprtn = get_op_func(argv[2]);
	if (!oprtn)
	{
		printf("Error\n");
		exit(99);
	}
	a = oprtn(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);

	return (0);
}
