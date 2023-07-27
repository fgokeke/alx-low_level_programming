#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: the string of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	while (str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
