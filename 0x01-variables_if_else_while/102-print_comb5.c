#include <stdio.h>

/**
  * main - print all possible combinations of two two-digit numbers.
  * Return: (0) Scuess
  */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (!(!i && j == 1))
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + (i / 10));
			putchar('0' + (i % 10));

			putchar(' ');

			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
		}
	}

	putchar('\n');

	return (0);
}
