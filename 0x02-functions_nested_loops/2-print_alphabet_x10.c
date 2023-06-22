#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: no value
 */
void print_alphabet_x10(void)
{
	char first_alpha; 
	char last_alpha;
	char i = 0;

	while (i < 10)
	{
		first_alpha = 'a';
		last_alpha = 'z';
		while (first_alpha <= last_alpha)
		{
			_putchar(first_alpha);
			first_alpha++;
		}
		_putchar('\n');
		i++;
	}
}
