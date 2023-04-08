#include "main.h"

/**
  * _strpbrk - first occurrence in the string s of any byte in a nother string
  *
  * @s: pointer to string
  * @accept: pointer to string
  *
  * Return: pointer to first occurance in string s
  */
char *_strpbrk(char *s, char *accept)
{
	register unsigned int i;
	char *sptr;

	sptr = s;

	while (*sptr != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*sptr == accept[i])
			{
				return (sptr);
			}
		}

		++sptr;
	}

	return ('\0');
}
