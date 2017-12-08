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
	size_t i, times, blk_size;
	listint_t *last;

	if (list == NULL || size == 0)
		return (NULL);
	blk_size = sqrt(size);
	last = list;
	times = 0;
	while (1)
	{
		for (i = 0; i < blk_size && list->next != NULL; i++)
			list = list->next;
		printf("Value checked at index [%lu] = [%d]\n",
		       blk_size * (times + 1) - (blk_size - i), list->n);
		if (value <= list->n || list->next == NULL)
			break;
		last = list;
		times++;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       blk_size * times,
	       blk_size * (times + 1) - (blk_size - i));
	for (i = 0; i < blk_size; i++)
	{
		if (last == NULL)
			return (NULL);
		printf("Value checked at index [%lu] = [%d]\n",
		       times * blk_size + i, last->n);
		if (last->n == value)
			return (last);
		last = last->next;
	}
	return (NULL);
}
