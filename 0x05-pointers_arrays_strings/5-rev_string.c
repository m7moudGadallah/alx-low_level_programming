#include "main.h"

/**
  * rev_string - reverse string
  *
  * @s: pointer to string
  */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (j = 0; s[j] != '\0'; j++)
		;
	--j;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
