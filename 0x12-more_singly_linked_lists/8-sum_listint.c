#include "lists.h"

/**
 * sum_listint - sum of all data contained by nodes of list `head'
 * @head: pointer to beginning of list
 *
 * Return: Sum of list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
