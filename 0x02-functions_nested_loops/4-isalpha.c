#include "main.h"

/**
 * _isalpha - to check for alphabets
 * @c: the character to be checked
 *
 * Return: 0 on successful execution
 */
int _isalpha(int c)
{
	char A = 65;
	char Z = 90;
	char a = 97;
	char z = 122;

	if ((c >= A && c <= Z) || (c >= a && c <= z))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
