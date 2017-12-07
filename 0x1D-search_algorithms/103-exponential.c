#include "search_algos.h"

#define min(a, b) ((a) <= (b) ? (a) : (b))

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

/**
 * exponential_search - search for element equal to `value` in `array` using
 * exponential (a.k.a. galloping) search.
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Description: Search for element equal to value at exponentially increasing
 * indices. When an element greater than or equal to `value` is found perform
 * binary search from the previous exponential index to the found exponential
 * index. This method finds elements in O(log(i)) time, where `i` is the index
 * where value should be located and beats standard binary search for low
 * indices.
 *
 * Return: index of element equal to `value`, or -1 if it is absent or array
 * is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int b;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 1; i < size && value >= array[i]; i *= 2)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	i /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       i, min(size - 1, i * 2));
	b = binary_search(array + i, min(i + 1, size - i), value);
	if (b == -1)
		return (-1);
	return (b + i);
}
