#include "search_algos.h"

/**
 * linear_skip - simple implementation of jump search on a skiplist
 * @list: pointer to head of list
 * @value: value to search for
 *
 * Return: pointer to node where node->n is equal to `value`, or NULL
 * if list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *last;

	if (list == NULL)
		return (NULL);
	while (list->n < value)
	{
		last = list;
		list = list->express;
		if (list == NULL)
		{
			list = last;
			while (list->next != NULL)
				list = list->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n",
		       list->index, list->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       last->index, list->index);
	while (last->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       last->index, last->n);
		if (last->n == value)
			return (last);
		if (last == list)
			break;
		last = last->next;
	}
	return (NULL);
}
