#include "main.h"

/**
  * factorial -  factorial of a given number
  *
  * @n: int number
  *
  * Return: factorial of passed number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (n);

	return (n * factorial(n - 1));
}
