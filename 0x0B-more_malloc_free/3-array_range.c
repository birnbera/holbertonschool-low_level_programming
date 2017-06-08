#include <stdlib.h>

/**
 * array_range - allocate array initialized from `min' to `max'
 * @min: lowest value placed in array
 * @max: highest value placed in array
 *
 * Return: pointer to array, or NULL if `min' > `max' or malloc fails
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; ++i)
		p[i - min] = i;
	return (p);
}
