#include "main.h"

/**
  * clear_bit - set value of a  bit to 0
  *
  * @n: pointer to num
  * @index: index of bit to clear
  * Return: (1) sucess, (-1) otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;


	if (*n & m)
		*n ^= m;

	return (1);
}
