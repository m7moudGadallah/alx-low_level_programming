#include "main.h"

/**
  *  print_most_numbers - print numbers from 0 to 9 and exclude (2 and 4)
  */
void print_most_numbers(void)
{
	register int i;

	for (i = 0; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}

		_putchar('0' + i);
	}

	_putchar('\n');
}
