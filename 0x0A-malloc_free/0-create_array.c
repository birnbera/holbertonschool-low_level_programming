#include <stdlib.h>

/**
 * create_array - create array of characters initialized to `c'
 * @size: size of array to create
 * @c: character to initialize to
 *
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
		return (arr);

	for (i = 0; i < size; ++i)
		arr[i] = c;
	return (arr);
}
