#include <stdio.h>

/**
  * main - prints program name, followed by a newline
  *
  * @argc: int
  * @argv: array of arguments
  *
  * Return: (0) Sucess
  */
int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
