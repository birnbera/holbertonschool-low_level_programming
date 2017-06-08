#include <stdlib.h>

/**
 * _calloc - allocate (`size' * `nmemb') bytes and set to 0
 * @nmemb: number of elements
 * @size: number of bytes per element
 *
 * Return: pointer to memory, or NULL if `nmemb' or `size' is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; ++i)
		p[i] = 0;
	return (p);
}
