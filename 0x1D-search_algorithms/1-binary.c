#include "search_algos.h"

/**
 * print_subarray - subroutine to print out the elements of an array
 * @array: array to print
 * @size: length of array
 */
void print_subarray(int *array, size_t size)
{
	printf("Searching in array: %d", *array++);
	while (--size)
		printf(", %d", *array++);
	printf("\n");
}

/**
 * binary_search - binary search for element in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of element equal to `value`, or -1 if absent or array is
 * NULL or empty.
 */
int binary_search(int *array, size_t size, int value)
{
	int r;
	size_t mid = (size - 1) / 2;

	if (array == NULL || size == 0)
		return (-1);
	print_subarray(array, size);
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_search(array, mid + 1, value));
	r = binary_search(array + mid + 1, size - mid - 1, value);
	if (r == -1)
		return (-1);
	return (mid + 1 + r);
}
