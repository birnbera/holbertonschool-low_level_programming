#include "sort.h"

/**
 * insertion_sort_list - insertion sort for doubly linked list
 * @list: double pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *curr, *prev;

	head = curr = prev = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	head = *list;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			curr = head->next;
			if (head->prev != NULL)
				head->prev->next = curr;
			if (curr->next != NULL)
				curr->next->prev = head;
			head->next = curr->next;
			curr->prev = head->prev;
			curr->next = head;
			head->prev = curr;
			if (curr->prev == NULL)
				*list = curr;
			print_list((const listint_t *) *list);
			while (curr->prev != NULL)
			{
				if (curr->n >= curr->prev->n)
					break;
				prev = curr->prev;
				if (prev->prev != NULL)
					prev->prev->next = curr;
				curr->next->prev = prev;
				prev->next = curr->next;
				curr->prev = prev->prev;
				curr->next = prev;
				prev->prev = curr;
				if (curr->prev == NULL)
					*list = curr;
				print_list((const listint_t *) *list);
			}
		}
		else
			head = head->next;
	}
}
