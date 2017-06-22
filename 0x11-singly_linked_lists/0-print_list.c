#include "lists.h"
#include <stdio.h>

/**
 * print_list - print string and length of string for each element of `h'
 * @h: pointer to first element of list
 *
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *ll = h;

	while (ll)
	{
		printf("[%u] %s\n", ll->len, ll->str);
		ll = ll->next;
		++size;
	}
	return (size);
}
