#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: to count number of arguments.
 * @argv: pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
