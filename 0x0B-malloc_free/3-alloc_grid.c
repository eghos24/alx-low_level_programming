#include "main.h"
/**
 *alloc_grid - prints grid
 *@width: input
 *@height: input
 *Return: NULL or Grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == 0)
			{
				while(i > 0)
				{
					free(grid[i]);
					i--;
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
