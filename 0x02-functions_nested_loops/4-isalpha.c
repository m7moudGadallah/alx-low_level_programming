#include "main.h"

/**
  * _isalpha - check char is letter or not
  *
  * @c : char we need to check
  *
  * Return: (1) if c is letter, (0) otherwise
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


