#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * lenStr - get length of string
  *
  * @s: pointer to string
  *
  * Return: length of string
  */
unsigned int lenStr(char *s)
{
	register unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
  * str_concat - concat 2 strings in a new string
  *
  * @s1: pointer to first string
  * @s2: pointer to second string
  *
  * Return: {NULL} if 2 string are NULL or failure, otherwise {pointer}
  */
char *str_concat(char *s1, char *s2)
{
	register int size1, size2, i, j;
	char *nwStr;

	if (!s1)
		s1 = "\0";

	if (!s2)
		s2 = "\0";

	size1 = lenStr(s1);
	size2 = lenStr(s2);

	nwStr = (char *) malloc(size1 * sizeof(*s1) + size2 * sizeof(*s2) + 1);

	if (!nwStr)
		return (NULL);

	for (i = 0; i < size1; i++)
		nwStr[i] = s1[i];

	for (j = 0; j < size2; j++, i++)
		nwStr[i] = s2[j];

	return (nwStr);
}
