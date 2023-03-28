#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generate random passwords
  *
  * Return: (0) Sucess
  */
int main(void)
{
	int sum;
	char c;

	srand(NULL);

	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
