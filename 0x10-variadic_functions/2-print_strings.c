#include "variadic_functions.h"

/**
  * print_strings - print params
  *
  * @separator: string separator
  * @n: number of params
  * @...: params
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list strs;
	char *str;

	i = n;

	va_start(strs, n);

	while (i--)
	{
		printf("%s%s", ((str = va_arg(strs, char*)) ? str : "(nil)"),
				((i) ? ((separator) ? separator : "") : ""));
	}

	printf("\n");
}
