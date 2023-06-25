#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 * of a fibonacci sequence
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 3;
	long int next;
	long int sum_b;
	long int n1 = 1;
	long int n2 = 2;
	long int sum_a = 0;

	for (i = 3; i <= 33; i++)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if ((next % 2) == 0)
		{
			sum_a += next;
			sum_b = sum_a + 2;
		}
		printf("%ld\n", sum_b);
	}
	return (0);
}
