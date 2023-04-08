#include <stdio.h>

/**
  * main - print all passed arguments
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess
  */
int main(int argc, char const *argv[])
{
	register int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
