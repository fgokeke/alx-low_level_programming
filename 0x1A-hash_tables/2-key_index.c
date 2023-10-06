#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key to be considered.
 * @size: size of the array of the hash table.
 *
 * Return:  index at which the key/value pair should be
 * stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}
