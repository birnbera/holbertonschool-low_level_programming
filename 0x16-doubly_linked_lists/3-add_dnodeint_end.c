#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of doubly linked list `head'
 * @head: double pointer to head of list
 * @n: value with which to initialize new node
 *
 * Return: pointer to new node, or NULL on failure to malloc
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for (end = *head; end->next != NULL; end = end->next)
		;
	new->prev = end;
	end->next = new;
	return (new);
}
