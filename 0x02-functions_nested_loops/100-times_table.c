#include <stdio.h>
#include "main.h"

/**
  * print_times_table - print multiplication tables from 0 to n
  *
  * @n: int number which is the number of multiplication tables
  */
void print_times_table(int n)
{
	register int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		printf("0");

		for (j = 1; j <= n; j++)
		{
			printf(", ");
			printf("%3d", i * j);
		}

		printf("\n");
	}
}
