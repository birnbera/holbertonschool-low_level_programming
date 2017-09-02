#include "hash_tables.h"

/**
 * sorted_list_insert - function to insert new node into list
 * alphanumerically by key.
 * @ht: pointer to hash table
 * @new: new node to be inserted
 */
void sorted_list_insert(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *shead = ht->shead;

	if (shead == NULL)
	{
		ht->shead = ht->stail = new;
		new->snext = new->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new->key, shead->key) < 0)
		{
			new->snext = shead;
			new->sprev = shead->sprev;
			if (shead->sprev == NULL)
				ht->shead = new;
			else
				shead->sprev->snext = new;
			shead->sprev = new;
			return;
		}
		shead = shead->snext;
	} while (shead);
	new->sprev = ht->stail;
	new->snext = ht->stail->snext;
	ht->stail->snext = new;
	ht->stail = new;
}

/**
 * create_shash_node - function to create new sorted hash table node
 * @key: key to use (mallocated by calling function).
 * @value: value associated with key (also mallocated by calling function).
 *
 * Return: pointer to new node
 */
shash_node_t *create_shash_node(char *key, char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(key);
		free(value);
		return (NULL);
	}
	new->key = key;
	new->value = value;
	return (new);
}

/**
 * shash_table_create - function to allocate and initialize new sorted
 * hash table.
 * @size: size of array to allocate.
 *
 * Return: pointer to new hash table instance
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->size = size;
	ht->shead = ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - function to set new table element
 * @ht: pointer to hash table
 * @key: key to use
 * @value: value to associate with key
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *keydup, *valdup;
	shash_node_t *new, *bucket;
	unsigned long int index;

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
	index = key_index((unsigned char *) keydup, ht->size);
	for (bucket = ht->array[index]; bucket != NULL; bucket = bucket->next)
		if (strcmp(keydup, bucket->key) == 0)
		{
			free(bucket->key);
			free(bucket->value);
			bucket->key = keydup;
			bucket->value = valdup;
			return (1);
		}
	new = create_shash_node(keydup, valdup);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	sorted_list_insert(ht, new);
	return (1);
}

/**
 * shash_table_get - function to get sorted hash table element by key
 * @ht: pointer to sorted hash table
 * @key: key to search
 *
 * Return: value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *bucket;
	unsigned long int index;
	char *keydup;

	if (ht == NULL || key == NULL)
		return (NULL);
	keydup = strdup(key);
	if (keydup == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	for (bucket = ht->array[index]; bucket != NULL; bucket = bucket->next)
		if (strcmp(keydup, bucket->key) == 0)
		{
			free(keydup);
			return (bucket->value);
		}
	free(keydup);
	return (NULL);
}

/**
 * shash_table_print - function to print sorted hash table in alphanumeric
 * order.
 * @ht: pointer to sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char many = 0;

	if (ht == NULL)
		return;
	putchar('{');
	node = ht->shead;
	while (node)
	{
		if (many)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		many = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print sorted hash table in
 * reverse alphanumeric order.
 * @ht: pointer to sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char many = 0;

	if (ht == NULL)
		return;
	putchar('{');
	node = ht->stail;
	while (node)
	{
		if (many)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		many = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function to free hash table
 * @ht: pointer to sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *next;

	if (ht == NULL || ht->array == NULL)
		return;
	head = ht->shead;
	while (head)
	{
		next = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = next;
	}
	free(ht->array);
	free(ht);
}
