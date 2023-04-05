#include "main.h"

/**
  * _pow_recursion -  returns the value of x raised to the power of y
  *
  * @x: base
  * @y: power
  *
  * Return:  returns the value of x raised to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	if (y & 1)
		return (x * _pow_recursion(x * x, y >> 1));

	return (_pow_recursion(x * x, y >> 1));
}
