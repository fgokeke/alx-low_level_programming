#include "main.h"

/**
 * print_alphabet - to print the alphabets
 *
 * Return: does not return a value
 */
void print_alphabet(void)
{
	char first_alph = 'a';
	char last_alph = 'z';

	while (first_alph <= last_alph)
	{
		_putchar(first_alph);
		first_alph++;
	}
	_putchar('\n');
}
