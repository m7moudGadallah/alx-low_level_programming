#include "main.h"
#include <string.h>

/**
  * is_palindrome_helper - recurse funciton check if string is palindrome
  *
  * @s: pointer to string
  * @l: left pointer
  * @r: right pointer
  *
  * Return: (1) string is palindrome, (0) otherwise
  */
int is_palindrome_helper(char *s, int l, int r)
{
	if (l >= r)
		return (1);

	if (s[l] != s[r])
		return (0);

	return (is_palindrome_helper(s, l + 1, r - 1));
}

/**
  * is_palindrome - check if string is palindrome or not
  *
  * @s: pointer to string
  *
  * Return: (1) palindrome, (0) otherwise
  */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (!len)
		return (0);

	return (is_palindrome_helper(s, 0, len - 1));
}
