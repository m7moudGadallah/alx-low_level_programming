#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_array - allocate an array
  *
  * @size: size of an array
  *
  * Return: {NULL} if size = 0 or failure, {pointer} otherwise
  */
int *alloc_array(int size)
{
	int *arr = malloc(size * sizeof(int));

	if (!size || !arr)
		return (NULL);

	while (size--)
		arr[size] = 0;

	return (arr);
}

/**
  * alloc_grid - allocate and 2d array
  *
  * @width: number of colums
  * @height: number of rows
  *
  * Return:{NULL} if failure, otherwise {pointer to grid}
  */
int **alloc_grid(int width, int height)
{
	register int i, flag;
	int **grid;

	grid = malloc(height * sizeof(int *));

	if (height <= 0 || width <= 0 || !grid)
		return (NULL);

	flag = 1;

	for (i = 0; i < height; i++)
	{
		grid[i] = alloc_array(width);

		if (!grid[i])
		{
			flag = 0;
			break;
		}
	}

	while (!flag && i--)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	if (!flag)
	{
		free(*grid);
		grid = NULL;
	}

	return (grid);
}
