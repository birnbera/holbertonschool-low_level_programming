#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * print_listint_safe - print list pointed to by `head' with special
 * attention to cycles.
 * @head: pointer to head of list
 *
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, nodes, bigger_size, buffer_size = BUFFER_SIZE;
	const listint_t **buffer, **bigger_buffer;

	if (head == NULL)
		return (0);
	buffer = malloc(sizeof(listint_t *) * buffer_size);
	if (buffer == NULL)
		exit(98);
	for (nodes = 0; head != NULL; ++nodes)
	{
		if (nodes == buffer_size)
		{
			bigger_size = buffer_size + BUFFER_SIZE;
			bigger_buffer = _realloc(buffer,
						 buffer_size,
						 bigger_size);
			buffer_size = bigger_size;
			if (bigger_buffer == NULL)
			{
				free(buffer);
				exit(98);
			}
			buffer = bigger_buffer;
		}
		for (i = 0; i < nodes; ++i)
		{
			if (head == buffer[i])
			{
				print_buffer(buffer, nodes);
				printf("-> [%p] %d\n", (void *) head, head->n);
				free(buffer);
				return (nodes);
			}
		}
		buffer[nodes] = head;
		head = head->next;
	}
	print_buffer(buffer, nodes);
	free(buffer);
	return (nodes);
}

/**
 * print_buffer - helper function to print addresses and values from
 * array containing pointers to `listint_t'
 * @buffer: array containing listint_t *
 * @nodes: number of elements to print
 */
void print_buffer(const listint_t **buffer, size_t nodes)
{
	while (nodes--)
	{
		printf("[%p] %d\n", (void *) *buffer, (*buffer)->n);
		++buffer;
	}
}

/**
 * _realloc - expand size of buffer to store valid listint_t *
 * @ptr: current buffer
 * @old_s: current number of elements
 * @new_s: desired new size
 *
 * Return: pointer to new buffer
 */
const listint_t **_realloc(const listint_t **ptr, size_t old_s, size_t new_s)
{
	size_t i;
	const listint_t **new_buf;

	new_buf = malloc(sizeof(listint_t *) * new_s);
	if (new_buf == NULL)
		return (NULL);
	for (i = 0; i < old_s; ++i)
		new_buf[i] = ptr[i];
	free(ptr);
	return (new_buf);
}
