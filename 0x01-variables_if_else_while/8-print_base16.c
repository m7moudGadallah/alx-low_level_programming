#include <stdio.h>

/**
  * main - print all single digits in number base 16
  * Return: (0) Scuess
  */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; i++)
	{
		c = '0' + i;

		if (i > 9)
		{
			c = 'a' + (i - 10);
		}

		putchar(c);
	}

	putchar('\n');

	return (0);
}
