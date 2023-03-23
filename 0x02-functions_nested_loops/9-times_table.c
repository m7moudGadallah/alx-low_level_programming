#include <stdio.h>
#include "main.h"

/**
  * times_table - print the 9 times table
  */
void times_table(void)
{
	register int i, j;

	for (i = 0; i <= 9; i++)
	{
		printf("0");

		for (j = 1; j <= 9; j++)
		{
			printf(", ");
			printf("%2d", i * j);
		}

		printf("\n");
	}
}
