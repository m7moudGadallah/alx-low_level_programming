#include "main.h"

/**
  * print_binary_rec - recursive functoin to print binary representation
  *
  * @n: number
  */
void print_binary_rec(unsigned long int n)
{
	if (!n)
		return;

	print_binary_rec(n >> 1);
	_putchar((n & 1) + '0');
}

/**
  * print_binary - printf binary representation of number
  *
  * @n: number
  */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar(0 + '0');
		return;
	}

	print_binary_rec(n);
}
