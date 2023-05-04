#include "main.h"

/**
  * binary_to_uint - convert binary to unsigned int
  *
  * @b: pointer to string
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, ans = 0;

	if (!b)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		ans = 2 * ans + (b[i] - '0');
	}

	return (ans);
}
