#include "variadic_functions.h"

/**
  * sum_them_all - sum of all its parameters
  *
  * @n: number of params
  * @...: integers to get their sum
  *
  * Return: the integers sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list nums;

	sum = 0;
	i = n;

	if (!n)
		return (0);

	va_start(nums, n);

	while (i--)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
