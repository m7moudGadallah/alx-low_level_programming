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
  * main - print all passed arguments
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess, (1) otherwise
  */
int main(int argc, char *argv[])
{
	if (argc < 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
