#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 * @width : param
 * @height : param
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc((height) * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; ++i)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
