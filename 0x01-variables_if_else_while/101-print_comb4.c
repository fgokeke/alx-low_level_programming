#include <stdio.h>

/**
 * main - to print combination of 3 digits
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	int a;
	int b;
	int comma = 44;
	int space = 32;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			for (b = 48; b < 58; b++)
			{
				if (i != a && i != b && a != b && i < a && a < b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
					if (i != 55 || a != 56 || b != 57)
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
