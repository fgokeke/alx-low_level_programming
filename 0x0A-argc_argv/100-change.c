#include <stdio.h>
#include <stdlib.h>

int change_cent(int a);
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of arguments
 * @argv: the strings of each arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("%d\n", 0);
	}
	return (change_cent(a));
}

/**
 * change_cent - to calculate min. coins to make change.
 * @a: the money to be changed
 *
 * Return: Always 0.
 */
int change_cent(int a)
{
	int b, c, i, j;

		if (a < 10)
		{
			printf("%d\n", (a / 2) + (a % 2));
		}
		else if (a >= 10 && a < 100)
		{
			b = ((a / 10) + (((a % 10) / 2) + ((a % 10) % 2)));
			printf("%d\n", b);
		}
		else if (a >= 100 && a < 1000)
		{
			i = (a / 25);
			j = (a % 25);
			if (j == 0)
			{
				printf("%d\n", i);
			}
			else if (j < 10)
			{
				printf("%d\n", i + ((j / 2) + (j % 2)));
			}
			else if (j >= 10 && j < 100)
			{
				c = ((j / 10) + (((j % 10) / 2) + ((j % 2) % 2)));
				printf("%d\n", i + c);
			}
		}
	return (0);
}
