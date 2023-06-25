#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 3;
	long int next;
	long int n1 = 1;
	long int n2 = 2;

	printf("%ld, ", n1);
	printf("%ld, ", n2);

	for (i = 3; i <= 50; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (next != 20365011074)
		{
		printf("%ld, ", next);
		}
	}
	printf("\n");

	return (0);
}
