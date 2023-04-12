#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars initialized it with a char.
  *
  * @size: size of array
  * @c: char that array will be initialized with it
  *
  * Return: (NULL) if it fails or size is zero, (pointer to array) otherwise
  */
char *create_array(unsigned int size, char c)
{
	char *str = (char *) malloc(size);

	if (!size || !str)
		return (NULL);

	while (size)
		str[--size] = c;

	return (str);
}
