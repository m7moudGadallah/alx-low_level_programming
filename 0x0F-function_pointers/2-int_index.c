#include <stddef.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  *
  * @array: pointer to integer array
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: index of element search for it
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	register int idx;

	if (!array || !size || !cmp)
		return (-1);

	for (idx = 0; idx < size; idx++)
		if (cmp(array[idx]))
			return (idx);

	return (-1);
}
