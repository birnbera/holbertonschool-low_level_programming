#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at beginning of list pointed to by `head'
 * @head: pointer to pointer to beginning of list
 * @n: value with which to initialize new element
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
