#include "main.h"

/**
  * leet - encodes a string into 1337
  *
  * @s: pointer to string
  *
  * Return: string encoded
  */
char *leet(char *s)
{
	char *sptr;
	char c;
	char map['t' + 1];

	map['a'] = '4';
	map['A'] = '4';
	map['e'] = '3';
	map['E'] = '3';
	map['o'] = '0';
	map['O'] = '0';
	map['t'] = '7';
	map['T'] = '7';
	map['l'] = '1';
	map['L'] = '1';

	sptr = s;

	while (*sptr != '\0')
	{
		c = *sptr;

		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o'
				|| c == 'O' || c == 't' || c == 'T' || c == 'l' || c == 'L')
		{
			*sptr = map[(int) c];
		}

		++sptr;
	}

	return (s);
}
