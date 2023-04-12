#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - return pointer contains a copy of the string given as a parameter
  *
  * @str: string will be copied
  *
  * Return: (NULL) if str is null or fails, (pointer to copy) otherwise
  */
char *_strdup(char *str)
{
	register unsigned int i, size;
	char *cpStr;

	if (!str)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	cpStr = (char *) malloc(size * sizeof(*str) + 1);

	if (!cpStr)
		return (NULL);

	for (i = 0; i < size; i++)
		cpStr[i] = str[i];

	return (cpStr);
}
