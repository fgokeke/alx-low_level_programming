#include <stdio.h>

/**
 * main - prints z to a
 *
 * char - to declare variables for the alphabets
 *
 * Return: 0 as successful
 */
int main(void)
{
	char last_alph = 'z';
	char first_alph = 'a';

	while (last_alph >= first_alph)
	{
		putchar(last_alph);
		last_alph--;
	}
	putchar('\n');

	return (0);
}
