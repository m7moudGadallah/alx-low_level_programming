#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - sum of the two diagonals of a square matrix of integers
  *
  * @a: 2D array
  * @size: size of array
  */
void print_diagsums(int *a, int size)
{
	register unsigned int i;
	int d1, d2;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; ++i)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}

	printf("%d, %d\n", d1, d2);
}
