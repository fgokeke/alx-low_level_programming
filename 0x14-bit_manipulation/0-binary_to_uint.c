#include "main.h"
#include <string.h>

/**
 * binary_to_uint -  a function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int weight = 1, index, str_length = strlen(b);
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (index = str_length - 1; index >= 0; index--)
	{
		if (b[index] < '0' || b[index] > '1')
		{
			return (0);
		}
		if (b[index] == '1')
		{
			decimal += weight;
		}
		weight = weight * 2;
	}
	return (decimal);
}
