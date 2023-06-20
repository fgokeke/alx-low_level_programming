#include <stdio.h>

/**
 * main - the main function
 *
 * char - variable type for the alphabets
 *
 * Return: 0 at successful execution
 */
int main(void)
{
	char First_Alph = 'a';
	char Last_Alph = 'z';

	while (First_Alph <= Last_Alph)
	{
		putchar(First_Alph);
		First_Alph++;
	}
	putchar ('\n');

	return (0);
}
