#include <stdio.h>
#include <unistd.h>

/**
  * main - program to print sentence on terminal with using unix simple operations
  * Return: (1) Success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
	write(1, str, sizeof(str)-1);
	return (1);
}
