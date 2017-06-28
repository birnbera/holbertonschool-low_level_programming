#include "lists.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024

/**
 * free_listint_safe - free a list pointed to by `h' with special attention
 * to loops.
 * @h: pointer to pointer to head of list
 *
 * Return: Size of list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, nodes, big_size, buf_size = BUFFER_SIZE;
	listint_t **buf, **big_buf;

	if (*h == NULL)
		return (0);
	buf = malloc(sizeof(listint_t *) * buf_size);
	if (buf == NULL)
		return (0);
	for (nodes = 0; *h != NULL; ++nodes)
	{
		if (nodes == buf_size)
		{
			big_size = buf_size + BUFFER_SIZE;
			big_buf = _realloc2(buf, buf_size, big_size);
			buf_size = big_size;
			if (big_buf == NULL)
			{
				free_buffer(buf, nodes);
				free(buf);
				return (nodes);
			}
			buf = big_buf;
		}
		for (i = 0; i < nodes; ++i)
		{
			if (*h == buf[i])
			{
				free_buffer(buf, nodes);
				*h = NULL;
				free(buf);
				return (nodes);
			}
		}
		buf[nodes] = *h;
		*h = (*h)->next;
	}
	free_buffer(buf, nodes);
	*h = NULL;
	free(buf);
	return (nodes);
}

/**
 * _realloc2 - expand size of buffer to store valid listint_t *
 * @ptr: current buffer
 * @old_s: current number of elements
 * @new_s: desired new size
 *
 * Return: pointer to new buffer
 */
listint_t **_realloc2(listint_t **ptr, size_t old_s, size_t new_s)
{
	size_t i;
	listint_t **new_buf;

	new_buf = malloc(sizeof(listint_t *) * new_s);
	if (new_buf == NULL)
		return (NULL);
	for (i = 0; i < old_s; ++i)
		new_buf[i] = ptr[i];
	free(ptr);
	return (new_buf);
}

/**
 * free_buffer - loops through buffer of listint_t pointers and frees them
 * @buffer: array of pointers to listint_t
 * @nodes: number of elements to print
 */
void free_buffer(listint_t **buffer, size_t nodes)
{
	while (nodes--)
	{
		free(*buffer);
		++buffer;
	}
}
