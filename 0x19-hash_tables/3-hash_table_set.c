#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - add new entry to hash table
 * @ht: pointer to hash table
 * @key: key to hash into index and store in node
 * @value: value to add to new node
 *
 * Return: 1 if successful, 0 if malloc fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *bucket;
	unsigned long int index;
	char *keydup, *valdup;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);
	keydup = strdup(key);
	if (keydup == NULL)
		return (0);
	valdup = strdup(value);
	if (valdup == NULL)
	{
		free(keydup);
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	for (bucket = ht->array[index]; bucket != NULL; bucket = bucket->next)
		if (strcmp(keydup, bucket->key) == 0)
		{
			free(bucket->key);
			if (bucket->value)
				free(bucket->value);
			bucket->key = keydup;
			bucket->value = valdup;
			return (1);
		}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(keydup);
		free(valdup);
		return (0);
	}
	node->key = keydup;
	node->value = valdup;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
