#include "main.h"

/**
  * _strcat - concatenate 2 strings with each other
  *
  * @dest: full string we will return
  * @src: string we need to cant it
  *
  * Return: (dest) after concatenate src with it
  */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		++ptr;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
	}

	*ptr = '\0';

	return (dest);
}
