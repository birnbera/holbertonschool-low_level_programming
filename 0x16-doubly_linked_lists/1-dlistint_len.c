#include "lists.h"

/**
 * dlistint_len - count number of elements in doubly linked list `h'
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
