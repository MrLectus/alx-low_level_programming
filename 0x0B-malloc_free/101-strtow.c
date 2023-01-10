#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: param
 * @height: param
 *
 * Return: Always 0 (Success)
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **v1;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	v1 = malloc((height + 1) * sizeof(char *));
	if (v1 == NULL || height == 0)
	{
		free(v1);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				v1[i] = malloc((c - k + 2) * sizeof(char));
				if (v1[i] == NULL)
				{
					ch_free_grid(v1, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			v1[i][j] = str[k];
		v1[i][j] = '\0';
	}
	v1[i] = NULL;
	return (v1);
}
