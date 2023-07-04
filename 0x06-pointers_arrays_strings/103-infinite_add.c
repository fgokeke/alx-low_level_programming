#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * infinite_add - a function that adds two numbers from strings
 * @n1: first number.
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: a pointer to ther result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int a = atoi(n1);
	unsigned int b = atoi(n2);
	unsigned int add = (a + b);

	snprintf(r, size_r, "%u", add);

	if (size_r <= snprintf (NULL, 0, "%u", add))
	{
		return NULL;
	}
	return (r);
}
