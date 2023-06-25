#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int next;
	int n1 = 1;
	int n2 = 2;

	for (i = 3; i <= 50; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		printf("%d, ", next);
	}
	printf("\n");

	return (0);
}
