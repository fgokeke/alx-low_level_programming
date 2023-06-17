#include <unistd.h>

/**
 * main - The main function.
 *
 * write - to print the string.
 *
 * Return: 1 to mean successful execution.
 */ 
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
