#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free list allocated using malloc and set `head' to NULL
 * @head: pointer to pointer to beginning of list
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (head == NULL)
		return;
	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
}
