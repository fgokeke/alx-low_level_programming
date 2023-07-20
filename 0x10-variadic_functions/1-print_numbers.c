#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: seperates the numbers.
 * @n: the amount of numbers.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list print_no;

	va_start(print_no, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(print_no, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(print_no);
	printf("\n");
}
