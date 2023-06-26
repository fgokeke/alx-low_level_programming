#include <stdio.h>

/**
 * main - to print the numbers from 1 to 100
 * fizz replaces multiples of 3, buzz replaces multiples of 5
 * fizzbuzz replaces multiples of 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			if (i != 100)
			{
				printf("%d ", i);
			}
			else
			{
			printf("%d", i);
			}
		}
	}
	printf("\n");

	return (0);
}
