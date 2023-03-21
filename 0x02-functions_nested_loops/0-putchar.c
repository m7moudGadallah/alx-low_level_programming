#include "main.h"

/**
  * main - print '_putchar' with using putchar
  * Return: (0) Sucess
  */
int main(void)
{
	char str[] = "_putchar";

	register int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	_putchar('\n');

	return (0);
}
