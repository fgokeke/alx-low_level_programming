#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - a function to add 2 integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to find the
 * difference between 2 integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: result of the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to multiply two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
