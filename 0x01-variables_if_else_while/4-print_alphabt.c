#include <stdio.h>

/**
 * main - the main function
 *
 *char - to declare variables for the alphabets
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char first_alpha = 'a';
	char last_alpha = 'z';
	char omit_alpha1 = 'q';
	char omit_alpha2 = 'e';

	while (first_alpha <= last_alpha)
	{
		if (first_alpha != omit_alpha1 && first_alpha != omit_alpha2)
		{
		putchar(first_alpha);
		}
	first_alpha++;
	}
	putchar('\n');

	return (0);
}
