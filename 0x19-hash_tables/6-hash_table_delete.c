#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *bucket, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		bucket = *(ht->array + i);
		while (bucket)
		{
			if (bucket->key)
				free(bucket->key);
			if (bucket->value)
				free(bucket->value);
			next = bucket->next;
			free(bucket);
			bucket = next;
		}
	}
	free(ht->array);
	free(ht);
}
