#include <stdio.h>
#include <stdlib.h>

/**
  * is_num - check if string can convert to num or not
  *
  * @s: pointer to string
  *
  * Return: (1) is_num, (0) otherwise
  */
int is_num(char *s)
{
	if (*s == '-')
		++s;

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);

		++s;
	}

	return (1);
}

/**
  * main - add passed numbers
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess, (1) otherwise
  */
int main(int argc, char *argv[])
{
	register int i;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
