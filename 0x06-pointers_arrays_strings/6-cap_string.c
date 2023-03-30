#include "main.h"

/**
  * isSeparator - check if passed char is separator on not
  *
  * @c: char
  *
  * Return: (1) if char is separator, (0) otherwise
  */
int isSeparator(char c)
{
	return (c == ' ' || c == '\n' || c == '.' || c == ',' || c == ';'
			|| c == '!' || c == '?' || c == '"' || c == '(' || c == ')'
			|| c == '{' || c == '}' || c == '\t');
}

/**
  * cap_string - capitalizes all words of a string
  *
  * @s: pointer to string
  *
  * Return: string after been capitalized
  */
char *cap_string(char *s)
{
	char *sptr;	/* pointer to string s */
	int flag;	/* flag to know if current char is begining of word or not */

	sptr = s;
	flag = 1;

	while (*sptr != '\0')
	{
		if (isSeparator(*sptr))
		{
			flag = 1;
		}
		else if (flag)
		{
			if (*sptr >= 'a' && *sptr <= 'z')
			{
				*sptr = 'A' + (*sptr - 'a');
			}

			flag = 0;
		}

		++sptr;
	}

	return (s);
}

