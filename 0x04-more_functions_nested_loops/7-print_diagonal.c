#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  *
  * @n: number of times fo char '\'
  */
void print_diagonal(int n)
{
	register int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
