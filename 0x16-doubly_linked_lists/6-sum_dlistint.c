#include "lists.h"

/**
 * sum_dlistint - sum over all data in doubly linked list `head'
 * @head: pointer to head of list
 *
 * Return: sum over all values in list, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
