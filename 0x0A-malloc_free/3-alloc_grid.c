#include <stdlib.h>

/**
 * alloc_grid - allocate 2D integer array of size `width' by `height'
 * @width: 2nd dimension
 * @height: 1st dimension
 *
 * Return: pointer to allocated array initialized to 0, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int i, j;
	int **p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			p[i][j] = 0;
	}
	return (p);
}
