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
	long int n1 = 1;
	long int n2 = 2;
	long int next;

	printf("%ld, ", n1);
	printf("%ld, ", n2);

	for (i = 3; i <= 98; i++)
	{
		next = n1 + n2;
		n2 = next;
		if (next != 135301852344706746049)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld", next);
		}
	}
	printf("\n");

	return (0);
}
