#include "main.h"

/**
  * print_alphabet - print all lowercasee alphabet
  */
void print_alphabet(void)
{
	register int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		++i;
	}

	_putchar('\n');
}
