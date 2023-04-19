#include "3-calc.h"

/**
  * throwError - print error message and exit
  *
  * @exitCode: code will passed to exit
  */
void throwError(int exitCode)
{
	printf("Error\n");
	exit(exitCode);
}


/**
  * main - test calc
  *
  * @argc: number of argument
  * @argv: argument list
  *
  * Return: (0) Sucess
  */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), num1, num2;
	char *op;

	if (argc != 4)
		throwError(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	op_func = get_op_func(op);

	if (!op_func)
		throwError(99);

	if (!num2 && (op[0] == '/' || op[0] == '%'))
		throwError(100);

	printf("%d\n", op_func(num1, num2));

	return (0);
}
