#include "main.h"
#include <stdio.h>

/**
 * add - Function to add two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function to subtract two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: difference between the two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Function to divide two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of the division.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Function to calculate the remainder of division
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the remainder of the division.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
