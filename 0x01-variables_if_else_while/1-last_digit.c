#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int n;
	int LastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDig = n % 10;
	if (LastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDig);
	}
	else if (LastDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDig);
	}
	else if (LastDig < 6 && LastDig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDig);
	}

	return (0);
}
