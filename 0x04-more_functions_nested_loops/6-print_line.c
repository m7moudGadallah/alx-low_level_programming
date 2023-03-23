#include "main.h"

/**
  * print_line - print line
  *
  * @n: length of line
  */
void print_line(int n)
{
	register int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
