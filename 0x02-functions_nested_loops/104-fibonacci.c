#include <stdio.h>

/**
 * main - to finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i = 3;
	int n1 = 1;
	int n2 = 2;
	int next;

	printf("%d, ", n1);
	printf("%d, ", n2);

	for (i = 3; i <= 98; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (i != 98)
		{
			printf("%d, ", next);
		}
		else
		{
			printf("%d", next);
		}
	}
	printf("\n");

	return (0);
}
