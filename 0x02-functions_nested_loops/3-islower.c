#include "main.h"

/**
 * _islower - to check for lower class characters
 *
 * @c - the character to be checked
 *
 * Return: 0 on successful execution
 */
int _islower(int c)
{
	char a = 97;
	char z = 122;

	if (c >= a && c <= z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
