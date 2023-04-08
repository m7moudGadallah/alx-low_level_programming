#include <stdio.h>

/**
  * main - print number of passed arguments
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess
  */
int main(int argc, char const *argv[])
{
	printf("%d\n", argc - 1);

	(void)argc;
	(void)argv;

	return (0);
}
