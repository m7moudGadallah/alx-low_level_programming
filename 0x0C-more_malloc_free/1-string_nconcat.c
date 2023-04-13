#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * strLen - get length of string
  *
  * @s: pointer to string
  *
  * Return: lenght of string
  */
unsigned int strLen(char *s)
{
	register unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}


/**
  * string_nconcat - concat 2 strings
  *
  * @s1: pointer to string
  * @s2: pointer to string
  * @n: number of chars taken from s2
  *
  * Return: (NULL) if it fails, if NULL passed return (""), otherwise pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1Len, len;
	char *mem;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	s1Len = strLen(s1);
	len = s1Len + n;

	mem = malloc(len * sizeof(char) + 1);

	if (!mem)
		return (NULL);

	i = 0;

	while (*s1 != '\0')
	{
		mem[i] = *s1;
		++i, ++s1;
	}

	while (i < len)
	{
		mem[i] = *s2;
		++i, ++s2;
	}

	mem[i] = '\0';

	return (mem);
}
