#include <stdio.h>

/**
  * main - print all single digit from 012 to 789
  * Return: (0) Sccuess
  */
int main(void)
{
	int i, digit1, digit2, digit3;

	for (i = 12; i < 790; i++)
	{
		digit1 = i % 10;
		digit2 = (i / 10) % 10;
		digit3 = (i / 100) % 10;

		if (!digit1)
		{
			if (!digit2)
			{
				i += (digit3 * 10) + (10 + (digit3 + 1));
			}
			else
			{
				i += digit2;
			}

			continue;
		}

		if (i != 12)
		{
			putchar(',');
			putchar(' ');
		}

		putchar('0' + digit3);
		putchar('0' + digit2);
		putchar('0' + digit1);
	}

	putchar('\n');

	return (0);
}
