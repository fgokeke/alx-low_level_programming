#include <stdio.h>

/**
 * main - to finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 when successful
 */
int main(void)
{
	unsigned int i = 3;
	unsigned int n1 = 1;
	unsigned int n2 = 2;
	unsigned int next;

	printf("%u, ", n1);
	printf("%u, ", n2);

	for (i = 3; i <= 98; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (i != 98)
		{
			printf("%u, ", next);
		}
		else
		{
			printf("%u", next);
		}
	}
	printf("\n");

	return (0);
}
