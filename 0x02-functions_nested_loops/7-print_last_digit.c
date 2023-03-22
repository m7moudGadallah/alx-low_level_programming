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
	n = (n < 0) ? -n : n;

	_putchar('0' + (n % 10));

	return (n % 10);
}
