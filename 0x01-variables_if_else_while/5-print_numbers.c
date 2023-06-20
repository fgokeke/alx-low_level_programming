#include <stdio.h>

/**
 * main - the main function
 *
 * a - represents the numbers in base 10
 *
 * Return: 0 when sucessfully executed
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');

	return (0);
}

