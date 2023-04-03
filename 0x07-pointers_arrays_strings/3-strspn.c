#include "main.h"

/**
  * _strspn - number of bytes in the initial segment of s which in accept
  *
  * @s: pointer to string
  * @accept: pointer to string
  *
  * Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	register unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}

	return (0);
}
