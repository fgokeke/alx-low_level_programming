#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MSG "Error"

/**
 * check_digit - to check for digits.
 * @str: the string to be checked.
 *
 * Return: 0 if there are digits and
 * 1 if there are not.
 */
int check_digit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);

		index++;
	}
	return (1);
}

/**
 * str_length - to calculate the
 * length of a string.
 * @str: the string to be considered.
 *
 * Return: length of string.
 */
int str_length(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * errors - handles errors for the main function
 *
 * Return: nothing.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - to multiply two positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: the result from the multiplication
 */
int main(int argc, char **argv)
{
	char *str1, *str2;
	int length, length1, length2, index, carry, dig1, dig2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !check_digit(str1) || !check_digit(str2))
		errors();
	length1 = str_length(str1);
	length2 = str_length(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (index = 0; index <= length1 + length2; index++)
		result[index] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		dig1 = str1[length1] - '0';
		carry = 0;
		for (length2 = str_length(str2) - 1; length2 >= 0; length2--)
		{
			dig2 = str2[length2] - '0';
			carry += result[length1 + length2 + 1] + (dig1 * dig2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (index = 0; index < length - 1; index++)
	{
		if (result[index])
			a = 1;
		if (a)
			_putchar(result[index] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
