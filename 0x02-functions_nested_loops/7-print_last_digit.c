#include "main.h"

/**
  * print_last_digit - to get last digit from passed number
  *
  * @n: int number to get last digit from it
  *
  * Return: last digit from n
  */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
