#include "main.h"

/**
  * _strchr - first occurrence of the character c in the string s
  *
  * @s: pointer to string
  * @c: char
  *
  * Return:  pointer to the first occurrence
  */
char *_strchr(char *s, char c)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
