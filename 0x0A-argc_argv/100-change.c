#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess, (1) otherwise
  */
int main(int argc, char const *argv[])
{
	int money, cnt;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}

	cnt = 0;

	cnt += money / 25;
	money %= 25;
	cnt += money / 10;
	money %= 10;
	cnt += money / 5;
	money %= 5;
	cnt += money / 2;
	money %= 2;
	cnt += money;

	printf("%d\n", cnt);

	return (0);
}
