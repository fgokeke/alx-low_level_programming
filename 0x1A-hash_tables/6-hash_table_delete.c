#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the table to be considered.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *element, *ptr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			element = ht->array[i];
			while (element != NULL)
			{
				ptr = element->next;
				free(element->key);
				free(element->value);
				free(element);
				element = ptr;
			}
		}
	}
	free(head->array);
	free(head);
}
