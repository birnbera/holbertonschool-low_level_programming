#include "sort.h"


int partition(int *array, int left, int right, size_t size)
{
	int i, j, tmp, pivot;

	(void)size;

	pivot = array[right];
	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}
	if (array[right] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[right];
		array[right] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

void qs_meat(int *array, int left, int right, size_t size)
{
	int p;

	(void)size;

	if (left < right)
	{
		p = partition(array, left, right, size);
		qs_meat(array, left, p - 1, size);
		qs_meat(array, p + 1, right, size);
	}
}

void quick_sort(int *array, size_t size)
{
	qs_meat(array, 0, size - 1, size);
}
