#include "lists.h"

/**
 * list_len - count number of elements of list `h'
 * @h: pointer to head of list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		++size;
	}
	return (size);
}
