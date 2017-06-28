#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node into list `head' at index `index'
 * @head: pointer to pointer to head of list
 * @idx: index where new node should be added
 * @n: value with which to initialize new node
 *
 * Return: pointer to new node, or NULL if fails. If `idx' - 1 is out of
 * range, return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; prev != NULL; ++i)
	{
		if (i == idx - 1)
		{
			new->next = prev->next;
			prev->next = new;
			return (new);
		}
		prev = prev->next;
	}
	free(new);
	return (NULL);
}
