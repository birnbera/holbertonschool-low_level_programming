#include "lists.h"

/**
 * find_listint_loop - find loop in list pointed to by `head'
 * @head: pointer to beginning of list
 *
 * Return: Address of beginning of loop, or NULL if none exists
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t fast, slow;

	if (head == NULL)
		return (NULL);
	fast.next = slow.next = head;
	fast.n = slow.n = 0;
	fast.next = (fast.next)->next;
	while (fast.next != slow.next)
	{
		if (fast.next == NULL)
			return (NULL);
		fast.next = (fast.next)->next;
		if (fast.next == NULL)
			return (NULL);
		fast.next = (fast.next)->next;
		slow.next = (slow.next)->next;
	}
	fast.next = (fast.next)->next;
	for (fast.n = 0; fast.next != slow.next; ++(fast.n))
		fast.next = (fast.next)->next;
	fast.next = slow.next = head;
	while (fast.n >= 0)
	{
		fast.next = (fast.next)->next;
		--(fast.n);
	}
	while (fast.next != slow.next)
	{
		fast.next = (fast.next)->next;
		slow.next = (slow.next)->next;
	}
	return (slow.next);
}
