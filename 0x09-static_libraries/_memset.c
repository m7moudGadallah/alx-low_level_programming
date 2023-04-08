#include "main.h"

/**
  * _memset - function fills the first n bytes of memory pointed on s by b
  *
  * @s: pointer to string
  * @b: pointer to string
  * @n: number of bytes
  *
  * Return: (s)
  */
char *_memset(char *s, char b, unsigned int n)
{
	register unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
