#include "lists.h"

/**
 * print_dlistint - print all elements of doubly linked list `h'
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
