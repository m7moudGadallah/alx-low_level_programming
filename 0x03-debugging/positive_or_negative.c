#include "main.h"

/**
  * positive_or_negative - check number is positive or negative or zero
  *
  * @n: integer number we need to check it
  */
void positive_or_negative(int n)
{
	if (!n)
	{
		printf("%d is zero", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}

	printf("\n");
}
