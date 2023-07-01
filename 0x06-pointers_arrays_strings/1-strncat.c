#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes to be copied form source string
 *
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
