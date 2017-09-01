#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function to create a new hash table of size `size`.
 * @size: size of array to use for hash table.
 *
 * Return: Pointer to newly created table or NULL on failure to allocate.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	size_t i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = array;
	table->size = size;
	for (i = 0; i < size; i++)
		*(array + i) = NULL;
	return (table);
}
