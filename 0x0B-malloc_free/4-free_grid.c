#include "main.h"

/**
 * free_grid - frees a 2D array.
 * @grid: pointer to 2D arr
 * @height: number of rows.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
