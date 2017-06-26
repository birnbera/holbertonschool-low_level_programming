#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node of list pointed to by `head'
 * @head: pointer to pointer to head node of list
 *
 * Return: integer stored by deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	pop = (*head);
	*head = (*head)->next;
	free(pop);
	return (n);
}
