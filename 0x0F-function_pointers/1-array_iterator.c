#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function passed on each element of an array
  *
  * @array: pointer to int array
  * @size: size of an array
  * @action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end;

	if (!array || !action || !size)
		return;

	end = array + size;

	while (array < end)
		action(*array++);
}
