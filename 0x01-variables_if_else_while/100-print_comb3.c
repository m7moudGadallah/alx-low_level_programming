#include <stdio.h>

/**
  * main - print all single digit from 01 to 89
  * Return: (0) Sccuess
  */
int main(void)
{
	int i, digit1, digit2;

	for (i = 1; i < 90; i++)
	{
		digit1 = i % 10;
		digit2 = (i / 10) % 10;

		if (!digit1)
		{
			i += digit2;
			continue;
		}

		if (i != 1)
		{
			putchar(',');
			putchar(' ');
		}

		putchar('0' + digit2);
		putchar('0' + digit1);
	}

	putchar('\n');

	return (0);
}
