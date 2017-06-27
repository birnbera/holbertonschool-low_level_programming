#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index `index' from list `head'
 * @head: pointer to pointer to beginning of list
 * @index: index at which to delete node, if possible
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *prev = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	for (i = 0; i < index - 1; ++i)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	delete = prev->next;
	prev->next = delete->next;
	free(delete);
	return (1);
}
