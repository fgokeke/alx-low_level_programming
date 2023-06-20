#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - to print combinations of 2 2-digit numbers
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a;
	int b;
	int comma = 44;
	int space = 32;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(space);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
			continue;
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');

	return (0);
}
