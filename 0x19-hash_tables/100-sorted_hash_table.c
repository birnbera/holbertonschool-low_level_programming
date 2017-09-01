#include "hash_tables.h"

void sorted_list_insert(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *shead = ht->shead;

	if (shead == NULL)
	{
		ht->shead = ht->stail = new;
		new->snext = new->sprev = NULL;
		return;
	}
	do
	{
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
