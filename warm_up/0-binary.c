#include "search_algos.h"

/**
 * binary_search - recursive binary search algorithm
 * @array: int array to search
 * @size: length of array
 * @value: value to search for
 *
 * Return: index of value in array, or -1 if array is empty or value is missing
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, loc;

	mid = (size - 1) / 2;
	if (!array || !size)
		return (-1);
	print_array(array, size);
	if (array[mid] == value)
		return (mid);
	if (value < array[mid])
		return (binary_search(array, mid + 1, value));
	loc = binary_search(array + mid + 1,
			    size - mid - 1,
			    value);
	if (loc == -1)
		return (-1);
	return (loc + mid + 1);
}

/**
 * binary_search_iterative - iterative binary search algorithm
 * @array: int array to search
 * @size: length of array
 * @value: value to search for
 *
 * Return: index of value in array, or -1 if array is empty or value is missing
 */
int binary_search_iterative(int *array, size_t size, int value)
{
	size_t mid, l = 0, r = size;

	if (!array || !size)
		return (-1);
	while (r > l)
	{
		print_array(array + l, r - l);
		mid = (r + l) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			r = mid;
		else
			l = mid + ((r - l) % 2);
	}
	return (-1);
}

/**
 * print_array - function to print out array
 * @array: int array to print
 * @size: number of elements in array
 */
void print_array(int *array, size_t size)
{
	if (!array || !size)
		return;
	printf("Searching in array: %d", *array++);
	while (--size)
		printf(", %d", *array++);
	printf("\n");
}
