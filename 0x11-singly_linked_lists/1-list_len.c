#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *ll = h;

	while (ll)
	{
		ll = ll->next;
		++size;
	}
	return (size);
}
