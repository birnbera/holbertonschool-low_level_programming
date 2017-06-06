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
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		arr[i] = c;
	return (arr);
}
