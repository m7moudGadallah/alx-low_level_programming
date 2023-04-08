#include "main.h"

/**
  * _strlen - get length of string
  *
  * @s: pointer to string
  *
  * Return: length of passed string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
