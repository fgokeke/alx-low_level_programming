#include <stdio.h>

/**
 * main - to print the numbers of base 16
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int i;
	char A = 'a';
	char F = 'f';

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	while (A <= F)
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
