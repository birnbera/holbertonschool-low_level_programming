#include "lists.h"

/**
 * reverse_listint - Reverse linked list
 * @head: pointer to pointer to list head
 *
 * Return: Pointer to list head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev = NULL;

	while (*head != NULL)
	{
		curr = *head;
		*head = curr->next;
		curr->next = prev;
		prev = curr;
	}
	*head = prev;
	return (*head);
}
