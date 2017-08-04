#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of doubly linked list `head'
 * @head: double pointer to head of list
 * @n: value with which to initialize new node
 *
 * Return: pointer to new node, or NULL on failure to malloc
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
