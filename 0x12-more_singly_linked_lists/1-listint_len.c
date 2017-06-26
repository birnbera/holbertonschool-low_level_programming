#include "lists.h"

/**
 * listint_len - compute number of elements in list `h'
 * @h: pointer to head of list
 *
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
		h = h->next;
	return (i);
}
