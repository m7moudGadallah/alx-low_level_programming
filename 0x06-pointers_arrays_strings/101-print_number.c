#include "main.h"

/**
  * printNum - print postivie integer number
  *
  * @n: positive number
  */
void printNum(int n)
{
	if (!n)
	{
		return;
	}

	printNum(n / 10);

	_putchar('0' + (n % 10));
}

/**
  * print_number - print integer number
  *
  * @n: number
  */
void print_number(int n)
{
	int rem;

	if (!n)
	{
		_putchar('0');

		return;
	}

	if (n < 0)
	{
		_putchar('-');

		rem = (n % 10) * -1;

		n = (n / 10) * -1;

		if (n)
		{
			printNum(n);
		}

		printNum(rem);
	}
	else
	{
		printNum(n);
	}
}
