#include "main.h"

/**
  * get_bit - get bit on specific index
  *
  * @n : number
  * @index: index
  * Return: bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = 0;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
