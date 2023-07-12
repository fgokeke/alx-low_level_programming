#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all
 * the arguments of your program.
 * @ac: the first argument.
 * @av: a double pointer to the second argument.
 *
 * Return: a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, a = 0, b = 0, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a < ac)
	{
		while (av[a][b])
		{
			i++;
			b++;
		}
		b = 0;
		a++;
	}
	str = malloc((sizeof(char) * i) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			str[c] = av[a][b];
			c++;
			b++;
		}
		str[c] = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	str[c] = '\0';

	return (str);
}
