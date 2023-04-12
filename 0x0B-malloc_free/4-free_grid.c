#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2d grid
  * @grid: 2d array
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	if (grid != (void *)'\0' && height > 0)
	{
		while (height--)
		{
			if (grid[height] != (void *)'\0')
			{
				free(grid[height]);
			}
		}
		free(grid);
	}
}
