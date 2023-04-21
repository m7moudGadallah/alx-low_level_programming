#include "variadic_functions.h"

/**
  * print_numbers - print passed params
  *
  * @separator: string separator
  * @n: number of params
  * @...: params
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list nums;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(nums, n);

	while (i--)
	{
		printf("%d%s", va_arg(nums, int),
				((i) ? (separator ? separator : "") : "\n"));
	}

	va_end(nums);
}
