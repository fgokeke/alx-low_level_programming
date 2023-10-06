#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the table to be considered.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element, *ptr;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];
		while (element)
		{
			ptr = element;
			element = element->next;
			if (ptr->key)
				free(ptr->key);

			if (ptr->value)
				free(ptr->value);
			free(ptr);
			element = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
