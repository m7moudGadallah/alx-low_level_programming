#include "main.h"

/**
  * print_alphabet_x10 - print lowecase alphabet 10x
  */
void print_alphabet_x10(void)
{
	register int i = 0, j = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 26)
		{
			_putchar('a' + j);
			++j;
		}

		_putchar('\n');
		++i;
	}
}
