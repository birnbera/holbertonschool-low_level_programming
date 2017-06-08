#include <stdlib.h>

/**
 * malloc_checked - allocate memory and set exit status
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
