#include "main.h"

/**
  * rot13 - encodes a string using rot13.
  *
  * @s: pointer to string
  *
  * Return: String after encoding
  */
char *rot13(char *s)
{
	int i, j;
	char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break;
			}
		}
	}

	return (s);
}
