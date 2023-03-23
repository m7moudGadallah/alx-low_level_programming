#include <stdio.h>

/**
  * main - print first 50 fibonacci numbers
  *
  * Return: (0) Scuess
  */
int main(void)
{
	register int i;
	long int pp, p, curr;

	pp = 1;
	p = 2;

	printf("1, 2");

	for (i = 2; i < 50; i++)
	{
		curr = p + pp;
		pp = p;
		p = curr;

		printf(", %ld", curr);
	}

	printf("\n");

	return (0);
}
