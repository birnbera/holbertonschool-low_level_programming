#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node in double linked list at
 * index `index'.
 * @h: double pointer to list
 * @idx: index at which to insert new node
 * @n: value with which to initialize new node
 *
 * Return: pointer to new node, or NULL if it could not be created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur = *h;
	unsigned int cur_idx;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (cur_idx = 0; cur != NULL; cur_idx++)
	{
		if (cur_idx == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cur;
			new->prev = cur->prev;
			cur->prev->next = new;
			cur->prev = new;
			return (new);
		}
		cur = cur->next;
	}
	return (NULL);
}
