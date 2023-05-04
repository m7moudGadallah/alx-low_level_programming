#include "main.h"

/**
  * flip_bits - flib bits in number
  *
  * @n: num1
  * @m: num2
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;

	for (; n || m; n >>= 1, m >>= 1)
		nbits += ((n & 1) != (m & 1));

	return (nbits);
}
