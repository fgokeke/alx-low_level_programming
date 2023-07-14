#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_len - point to the end of the first word in a string.
 * @str: string to be considered
 *
 * Return: point to the end of initial word marked by str.
 */
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - count words in a string.
 * @str: the string to be considered.
 *
 * Return: the amount of words in a string.
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
 * strtow - Write a function that splits a string into words.
 * @str: the string to be split.
 *
 * Return: a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);
			free(s);
			return (NULL);

		}
		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];
		s[w][l] = '\0';
	}
	s[w] = NULL;

	return (s);
}
