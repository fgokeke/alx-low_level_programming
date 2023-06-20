#include <stdio.h>

/**
 * main - to print the smallest combination 2 digits
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int i;
	int a;
	int comma = 44;
	int space = 32;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			if (i != a && i < a)
			{
				putchar(i);
				putchar(a);
				if (i != 56 || a != 57)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar('\n');
	
	return (0);
}
