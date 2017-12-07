#include "search_algos.h"

/**
 * interpolation_search - search for element equal to `value` within `array`
 * using interpolation.
 *
 * Description: Check the beginning and ending element of a subarray and
 * interpolate the location of `value`, if it exists, using the formula:
 *
 * pos = low
 *       + (((double)(high - low) / (array[high] - array[low]))
 *       * (value - array[low]))
 *
 * @array: array to search
 * @size: length of array
 * @value: value to search for
 *
 * Return: index of first element equal to `value`, or -1 if absent or
 * array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low < high && array[high] != array[low]) /* division by 0 */
	{
		pos = low + ((value - array[low])
			     * ((double)(high - low)
				/ (array[high] - array[low])));
		if (pos > high || pos < low)
		{
			printf("Value checked array[%d] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
		else
			return (pos);
	}
	printf("Value checked array[%d] = [%d]\n", low, array[low]);
	if (value == array[low])
		return (low);
	return (-1);
}
