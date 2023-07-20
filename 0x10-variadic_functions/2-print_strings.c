#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: seperates the strings.
 * @n: the number of strings.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list print_str;

	va_start(print_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print_str, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_str);
}
