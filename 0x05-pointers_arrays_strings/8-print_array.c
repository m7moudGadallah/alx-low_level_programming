#include "main.h"
#include <stdio.h>

/**
  * print_array - print array of n elements followed by new line
  *
  * @a: pointer to int array
  * @n: number of elements in array
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i)
		{
			printf(", ");
		}

		printf("%d", a[i]);
	}

	printf("\n");
}
