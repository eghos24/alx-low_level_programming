#include "main.h"
/**
 *alloc_grid - prints grid
 *@width: input
 *@height: input
 *Return: NULL or Grid
 */

int **alloc_grid(int width, int height)
{
	int **ans;
	int i;
	int j;

	ans = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || ans == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ans[i] = malloc(sizeof(int) * width);
			if (ans[i] == 0)
			{
				while(i > 0)
				{
					free(ans[i]);
					i--;
				}
				free(ans);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				ans[i][j] = 0;
			}
		}
	}
	return (ans);
}
