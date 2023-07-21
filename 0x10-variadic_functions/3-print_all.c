#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: list of argument passed.
 */
void print_all(const char * const format, ...)
{
	char *s, *separator = "";
	int index = 0;
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;

				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;

				case 's':
					s = va_arg(all, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;

				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(all);
}
