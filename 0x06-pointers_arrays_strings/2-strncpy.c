#include "main.h"

/**
  * _strncpy - function to copy n chars from src to dest
  *
  * @dest: pointer to destnation string
  * @src: pointer to src string
  * @n: number of chars need to be copied
  *
  * Return: (dest) after copying chars from src
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;

	while (n && *src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
		--n;
	}

	while (n)
	{
		*ptr = '\0';
		--n;
	}

	return (dest);
}
