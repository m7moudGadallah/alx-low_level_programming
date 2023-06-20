#include "main.h"

/**
  *  _strncat- concatenate n chars from string to another string
  *
  * @dest: full string we will return
  * @src: string we need to cant it
  * @n: number of chars
  *
  * Return: (dest) after concatenate n chars from src with it
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		++ptr;
	}

	while (n && *src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
		--n;
	}

	*ptr = '\0';

	return (dest);
}
