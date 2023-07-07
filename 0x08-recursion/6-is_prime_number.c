#include <stdio.h>
#include "main.h"

int prime_number(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the number to be considered.
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}

/**
 * prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the number to be considered.
 * @i: the divisor to be used to checlk.
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int prime_number(int n, int i)
{
	if ((i * i) > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i + 1));
}
