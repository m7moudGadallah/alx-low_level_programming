#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print all natural numbers from n to 98
  *
  * @n: integer number to represent start
  */
void print_to_98(int n)
{
	register int i, jump;

	jump = (n > 98) ? -1 : 1;
	i = n;

	while (i != 98 + jump)
	{
		if (i != n)
		{
			printf(", ");
		}

		printf("%d", i);

		i += jump;
	}

	printf("\n");
}
