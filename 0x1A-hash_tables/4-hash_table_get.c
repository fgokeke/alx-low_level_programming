#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value
 * associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return:  value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];
	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);

		element = element->next;
	}
	return (NULL);
}
