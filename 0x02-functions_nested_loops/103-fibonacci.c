#include <stdio.h>

/**
  * main - sum of even-valued of fibonacci terms doesn't exceed 4,000,000
  *
  * Return: (0) Sucess
  */
int main(void)
{
	long int pp, p, curr, ans;

	pp = 1;
	p = 1;
	curr = 0;
	ans = 0;

	while (curr <= 4000000)
	{
		curr = p + pp;

		pp = p;
		p = curr;

		if (curr % 2 == 0)
		{
			ans += curr;
		}
	}

	printf("%ld\n", ans);

	return (0);
}
