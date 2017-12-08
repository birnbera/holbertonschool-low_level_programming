#include "search_algos.h"
#include <math.h>

/**
 * jump_list - pseudo-implementation of jump search on a linked list
 * @list: pointer to head of list
 * @size: length of linked list
 * @value: value to search for
 *
 * Return: pointer to node with node->n equal to `value`, or NULL
 * if `value` is absent or list is empty.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, blk_size;
	listint_t *last;

	if (list == NULL || size == 0)
		return (NULL);
	blk_size = sqrt(size);
	last = list;
	for (last = list, i = 0; i < size; i++, list = list->next)
	{
		if (i != 0 && (i % blk_size == 0 || list->next == NULL))
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       list->index, list->n);
			if (value <= list->n || list->next == NULL)
				break;
			last = list;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       last->index,
	       list->index);
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
