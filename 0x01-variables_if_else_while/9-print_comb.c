#include <stdio.h>

/**
 * main - to print 0 to 9
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int comma = 44;
	int space = 32;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(comma);
		putchar(space);
		}
	}
	putchar('\n');

	return (0);
}
