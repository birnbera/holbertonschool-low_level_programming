/**
 * int_index - compare elements of `array' using `cmp'
 * @array: array to compare
 * @size: size of `array'
 * @cmp: function to call on elements of `array'
 *
 * Return: index of first element `cmp' does not return 0.
 * -1 if no element matches. If `size' <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return(-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
