#include <stdio.h>

/**
  * main - print all single digit of number base 10
  * Return: (0) Sccuess
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
