#include "sort.h"

/**
 * selection_sort - Selection sort algorithm
 * https://en.wikipedia.org/wiki/Selection_sort
 * @array: array of integers to sort
 * @size: size of array
 *
 *Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int tmp;

	for (i = 0; i < size; i++)
	{
		minIndex = i;
		for(j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
				minIndex = j;
		}
		if (array[minIndex] != array[i])
		{
			tmp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
