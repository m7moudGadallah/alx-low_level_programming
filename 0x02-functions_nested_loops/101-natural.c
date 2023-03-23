#include <stdio.h>

/**
  * main - get sum of multiplies of (3 or 5) from 1 1024 excluded
  *
  * Return: (0) Sucess
  */
int main(void)
{
	register int i;
	int sum;

	sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
