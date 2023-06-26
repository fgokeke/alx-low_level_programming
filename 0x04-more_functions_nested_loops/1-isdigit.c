#include "main.h"
/**
 * _isdigit - to check for a digit (0 through 9).
 * @c: the character to be checked.
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
