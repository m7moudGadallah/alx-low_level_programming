#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of nmemb elements of size bytes
  *
  * @nmemb: number of elements in array
  * @size: size of each element
  *
  * Return: pointer to array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	mem = malloc(nmemb * size);


	if (!mem)
		return (NULL);

	for (i = 0; i < nmemb * size; ++i)
		mem[i] = 0;

	return (mem);
}
