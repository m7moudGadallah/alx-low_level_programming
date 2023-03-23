#include <stdio.h>

/**
  * main - print first 98 fibonacci numbers
  *
  * Return: (0) Sucess
  */
int main(void)
{
	register int i;

	unsigned long int pp, p, curr;

	pp = 1;
	p = 2;

	printf("1, 2");

	for (i = 2; i <= 98; i++)
	{
		curr = pp + p;
		pp = p;
		p = curr;

		printf(", %lu", curr);
	}

	printf("\n");

	return (0);
}
