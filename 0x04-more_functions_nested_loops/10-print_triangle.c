#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  *
  * @size: the size of the triangle
  */
void print_triangle(int size)
{
	register int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}

		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
