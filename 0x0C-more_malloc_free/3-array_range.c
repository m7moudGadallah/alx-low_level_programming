#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - create array with range
  *
  * @min: min value
  * @max: max value
  *
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *mem;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	mem = malloc(n * sizeof(int));

	if (!mem)
		return (NULL);

	for (i = 0; i < n; i++)
		mem[i] = min++;

	return (mem);
}
