#include "main.h"

/**
 * alloc_grid - Returns pointer to a 2D arr of int
 * @width: rows
 * @height: columns
 * Return: value 2d array pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
