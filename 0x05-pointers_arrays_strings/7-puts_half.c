#include "main.h"

/**
  * puts_half - print second half of string
  *
  * @str: pointer to string
  */
void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = (len / 2) + (len % 2); i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
