#include "main.h"

/**
  * times_table - print the 9 times table
  */
void times_table(void)
{
	register int i, j;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;

			if (j)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (res > 10)
			{
				_putchar('0' + ((res / 10) % 10));
			}
			else
			{
				_putchar(' ');
			}

			_putchar('0' + (res % 10));
		}

		_putchar('\n');
	}
}
