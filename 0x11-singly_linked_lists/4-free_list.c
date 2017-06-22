#include "lists.h"

/**
 * free_list - free memory of all nodes of list pointed to by `head'
 * @head: pointer to beginning of list
 */
void free_list(list_t *head)
{
	list_t *next = head;

	if (next == NULL)
		return;
	while ((head = next->next))
	{
		free(next->str);
		free(next);
		next = head;
	}
	free(next->str);
	free(next);
}
