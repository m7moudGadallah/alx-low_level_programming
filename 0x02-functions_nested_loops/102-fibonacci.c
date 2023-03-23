#include <stdio.h>

/**
  * main - print first 100 fibonacci numbers
  *
  * Return: (0) Scuess
  */
int main(void)
{
	register int i;
	int pp, p, curr;

	pp = 1;
	p = 2;

	printf("1");

	for (i = 2; i < 100; i++)
	{
		curr = p + pp;
		pp = p;
		p = curr;

		printf(", %d", curr);
	}

	printf("\n");

	return (0);
}
