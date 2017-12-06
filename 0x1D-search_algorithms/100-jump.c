#include "search_algos.h"
#include <math.h>

#define min(a, b) ((a) <= (b) ? (a) : (b))

/**
 * jump_search - search through an array by jumping blocks of size
 * sqrt(size) until element larger than `value` is found. Then,
 * perform linear search on the found block.
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, or -1 if absent or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t blk_size = (size_t) sqrt(size);
	size_t i, j;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i += blk_size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	i -= (i > 0 ? blk_size : 0);
	printf("Value found between indexes [%lu] and [%lu]\n",
	       i, i + blk_size);
	for (j = i; j <= min(size - 1, i + blk_size) && array[j] <= value; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
