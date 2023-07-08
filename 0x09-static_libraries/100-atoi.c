#include <stdio.h>
#include "main.h"

/**
 * _atoi - to convert strings to integers
 * @s: the string to be converted
 *
 * Return: value of the integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	unsigned int result = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			num = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (num == 1)
		{
			break;
		}
		i++;
	}
	result = result * sign;

	return (result);
}
