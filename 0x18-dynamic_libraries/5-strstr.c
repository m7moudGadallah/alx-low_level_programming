#include "main.h"

/**
  * _strstr - finds the first occurrence of the substring
  *
  * @haystack: pointer to string
  * @needle: pointer to substring
  *
  * Return: pointer to substring
  */
char *_strstr(char *haystack, char *needle)
{
	register unsigned i, j;
	char *nptr;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		j = i;
		nptr = needle;

		while (*nptr == haystack[j])
			++nptr, ++j;

		if (*nptr == '\0')
			return (&haystack[i]);
	}

	return ('\0');
}
