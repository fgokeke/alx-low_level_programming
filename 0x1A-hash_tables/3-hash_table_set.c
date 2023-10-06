#include "hash_tables.h"

/**
 * create_element - to create an element to be inserted in the table.
 * @key: key part of the element.
 * @value: value part of the element.
 *
 * Return: the created element.
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (element == NULL)
	{
		free(element);
		return (NULL);
	}
	element->key = (char *) malloc(strlen(key) + 1);
	if (element->key == NULL)
	{
		free(element->key);
		return (NULL);
	}
	element->value = (char *) malloc(strlen(value) + 1);
	if (element->value == NULL)
	{
		free(element->value);
		return (NULL);
	}
	strcpy(element->key, key);
	strcpy(element->value, value);
	element->next = NULL;

	return (element);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: key is the key. key can not be an empty string.
 * @value:  value associated with the key.
 * value must be duplicated. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const char *value_dup = strdup(value);
	hash_node_t *current_element, *element;

	if (ht == NULL || key == NULL)
		return (0);

	element = create_element(key, value_dup);
	if (element == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_element = ht->array[index];
	if (current_element == NULL)
	{
		ht->array[index] = element;
	}
	else
	{
		while (current_element != NULL)
		{
			if (strcmp(current_element->key, key) == 0)
			{
				strcpy(ht->array[index]->value, value);
				return (1);
			}
			current_element = current_element->next;
		}
		element->next = ht->array[index];
		ht->array[index] = element;
	}
	return (1);
}
