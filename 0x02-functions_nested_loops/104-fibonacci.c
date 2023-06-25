#include <stdio.h>

/**
 * main - to finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 when successful
 */
int main(void)
{
	unsigned long int i = 3;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int next;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	for (i = 3; i < 99; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (i != 98)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu", next);
		}
	}
	printf("\n");

	return (0);
}
