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
 * advanced_binary - binary search for element in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of element equal to `value`, or -1 if absent or array is
 * NULL or empty.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int r;
	size_t mid = (size - 1) / 2;

	if (array == NULL || size == 0)
		return (-1);
	print_subarray(array, size);
	if (value == array[0])
		return (0);
	if (value <= array[mid])
		return (advanced_binary(array, mid + 1, value));
	r = advanced_binary(array + mid + 1, size - mid - 1, value);
	return (r == -1 ? -1 : (int) (mid + 1 + r));
}
