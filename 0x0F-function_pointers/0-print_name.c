#include "function_pointers.h"

/**
  * print_name - print a name
  *
  * @name: pointer to string
  * @f: pointer to fuction
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
