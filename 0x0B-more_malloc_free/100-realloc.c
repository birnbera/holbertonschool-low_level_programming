#include <stdlib.h>

/**
 * _realloc - reallocate memory at `ptr' to `new_size'
 * @ptr: ptr to existing memory or NULL
 * @old_size: number of bytes originally allocated to `ptr'
 * @new_size: number of bytes to request
 *
 * Return: pointer to new memory, or `ptr' if _realloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
		return (new_ptr);
	old_ptr = ptr;
	for (i = 0; i < new_size && i < old_size; ++i)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
