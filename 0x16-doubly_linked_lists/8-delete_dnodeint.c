#include "lists.h"

/**
 * delete_dnode_at_index - delete node in doubly linked list at index `index'
 * @head: double pointer to head of list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int cur_idx;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		if (cur->next != NULL)
			cur->next->prev = NULL;
		*head = cur->next;
		free(cur);
		return (1);
	}
	for (cur_idx = 0; cur != NULL; cur_idx++)
	{
		if (cur_idx == index)
		{
			cur->prev->next = cur->next;
			if (cur->next != NULL)
				cur->next->prev = cur->prev;
			free(cur);
			return (1);
		}
		cur = cur->next;
	}
	return (-1);
}
