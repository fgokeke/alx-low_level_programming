#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	long a, maxp;
	long i = 612852475143;
	double square = sqrt(i);

	for (a = 1; a <= square; a++)
	{
		if (i % a == 0)
		{
			maxp = i / a;
		}
	}
	printf("%ld\n", maxp);

	return (0);
}
