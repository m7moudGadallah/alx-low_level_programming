#include <stdio.h>

/**
  * _sqrt - get sqrt of number
  *
  * @n: number
  *
  * Return: sqrt of number
  */
long int _sqrt(long int n)
{
	long int i;

	i = 1;

	while (i * i <= n)
	{
		i++;
	}

	return (i - 1);
}

/**
  * maxPrimeFact - get max prime factor of number
  *
  * @n: number need to get max prime factor of it
  *
  * Return: max prime factor fo passed number
  */
long int maxPrimeFact(long int n)
{
	register long int mxPrime, i;

	mxPrime = -1;

	while (n % 2 == 0)
	{
		mxPrime = 2;
		n >>= 1;
	}

	for (i = 3; i <= _sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			mxPrime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		mxPrime = n;
	}

	return (mxPrime);
}

/**
  * main - main function
  *
  * Return: (0) Sucess
  */
int main(void)
{
	long int n;

	n = 612852475143;

	printf("%ld\n", maxPrimeFact(n));

	return (0);
}
