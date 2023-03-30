#include "main.h"

/**
  * isLower - to check if char is lower case or not
  *
  * @c: char to check
  *
  * Return: (1) is lowercase, (0) otherwise
  */
int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
  * string_toupper - convert string chars to uppercase
  *
  * @s: pointer to string
  *
  * Return: pointer to string
  */
char *string_toupper(char *s)
{
	char *sptr;

	sptr = s;

	while (*sptr != '\0')
	{
		if (isLower(*sptr))
		{
			*sptr = 'A' + (*sptr - 'a');
		}

		++sptr;
	}

	return (s);
}
