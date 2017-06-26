#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - append a new node at end of list pointed to by `head'
 * @head: pointer to pointer to beginning of list
 * @n: value with which to initialize new node
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (prev == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next)
		prev = prev->next;
	prev->next = new;
	return (new);
}
