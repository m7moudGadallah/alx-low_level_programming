#include "main.h"

/**
  * sqrt_helper - return sqrt of number
  *
  * @n: int number
  * @curr: current int
  *
  * Return: sqrt of n
  */
int sqrt_helper(int n, int curr)
{
	if (curr > (n >> 1))
		return (-1);

	if (curr * curr == n)
		return (curr);

	return (sqrt_helper(n, curr + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  *
  * @n: int number
  *
  * Return: sqrt of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (n);

	return (sqrt_helper(n, 0));
}
