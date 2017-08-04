#include "lists.h"

/**
 * get_dnodeint_at_index - access node of doubly linked list at index `index'
 * @head: pointer to head of list
 * @index: index to access
 *
 * Return: pointer to node at index `index', or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
