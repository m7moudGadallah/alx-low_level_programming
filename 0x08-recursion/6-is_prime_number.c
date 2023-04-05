#include "main.h"

/**
  * is_prime - check primelity
  *
  * @n: int number
  * @curr: curr int to check
  *
  * Return: (1) if number is prime, (0) otherwise
  */
int is_prime(int n, int curr)
{
	if (curr > (n >> 1))
		return (1);

	if (n % curr == 0)
		return (0);

	return (is_prime(n, curr + 1));
}

/**
  * is_prime_number - check primelity
  *
  * @n: int number
  *
  * Return: (1) if number is prime, (0) otherwise
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, 2));
}
