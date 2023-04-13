#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - allocate memory with using of malloc
  *
  * @b: size need to allocate
  *
  * Return: pointer to memory if success, otherwise exit(98)
  */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}
