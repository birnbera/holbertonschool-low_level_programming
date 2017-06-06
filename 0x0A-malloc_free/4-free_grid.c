#include <stdlib.h>

/**
 * free_grid - free 2D array created by `alloc_grid'
 * @grid: 2D array
 * @height: number of rows of `grid'
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;

	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
