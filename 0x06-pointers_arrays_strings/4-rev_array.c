#include "main.h"

/**
  * _swap - swap 2 integers
  *
  * @a: pointer to first int
  * @b: pointer to second int
  */
void _swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
  * reverse_array - reverse an array
  *
  * @a: pointer to int array
  * @n: number of element in array
  */
void reverse_array(int *a, int n)
{
	int *left, *right;

	if (!n)
	{
		return;
	}

	left = a;
	right = a + (n - 1);

	while (left < right)
	{
		_swap(left, right);

		++left;
		--right;
	}
}
