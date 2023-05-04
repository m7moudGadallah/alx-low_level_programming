#include "main.h"

/**
  * set_bit - set value a bit to 1 at an index
  *
  * @n: pointer number
  * @index: index
  * Return: (1) sucess, (-1) failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
