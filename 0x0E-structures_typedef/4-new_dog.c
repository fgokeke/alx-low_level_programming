#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * str_length - calculate the length of string
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
 * str_cpy - to copy from one string to another.
 * @dest: the destination string.
 * @source: the source string.
 *
 * Return: the destination string.
 */
char *str_cpy(char *dest, char *source)
{
	int length = 0, index;

	while (source[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < length; index++)
	{
		dest[index] = source[index];
	}
	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: a pointer to the struct type.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1 = str_length(name), length2 = str_length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
