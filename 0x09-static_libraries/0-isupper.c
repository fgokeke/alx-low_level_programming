#include "main.h"

/**
 * _isupper - to checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
