#include <stdio.h>

/**
 * main - the main function
 *
 * char - to declare variables for the alphabets
 *
 * Return: 0 at successful execution
 */
int main(void)
{
	char first_alpha = 'a';
	char last_alpha = 'z';
	char FIRST_ALPHA = 'A';
	char LAST_ALPHA = 'Z';

	while (first_alpha <= last_alpha)
	{
		putchar(first_alpha);
		first_alpha++;
	}
	while (FIRST_ALPHA <= LAST_ALPHA)
	{
		putchar(FIRST_ALPHA);
		FIRST_ALPHA++;
	}
	putchar('\n');

	return (0);
}
