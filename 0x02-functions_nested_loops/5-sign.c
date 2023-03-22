#include "main.h"

/**
  * print_sign - print sign of passed number
  *
  * @n : number to print it's sign
  *
  * Return: (1) and prints '+' if n is greater than zero
  * (0) and prints '0' if n is zero
  * (-1) and prints - if n is less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (!n)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
