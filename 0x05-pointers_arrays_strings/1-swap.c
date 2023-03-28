#include "main.h"

/**
  * swap_int - swap 2 integers
  *
  * @a: pointer to first int number
  * @b: pointer to second int number
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
