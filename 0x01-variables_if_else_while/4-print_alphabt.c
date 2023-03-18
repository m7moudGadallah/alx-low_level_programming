#include <stdio.h>

/**
  * main - print alphabet except `q` and `e`
  * Return: (0) Success
  */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 26; i++)
	{
		c = 'a' + i;

		if (c == 'e' || c == 'q')
		{
			continue;
		}

		putchar(c);
	}

	putchar('\n');

	return (0);
}
