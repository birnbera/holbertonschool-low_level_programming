#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function to retrieve value associated with `key`.
 * @ht: pointer to hash table
 * @key: key with which to retrieve value
 *
 * Return: value associated with `key`, or NULL if `key` does not exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *bucket;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	bucket = *(ht->array + index);
	while (bucket)
	{
		if (strcmp(key, bucket->key) == 0)
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
