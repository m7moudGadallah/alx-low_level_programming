#include "main.h"

/**
  * _atoi - function to convert from string to int
  *
  * @s: pointer to string
  *
  * Return: int converted
  */
int _atoi(char *s)
{
	unsigned int num;
	int sign, i;

	num = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
		{
			continue;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num)
		{
			return (num * sign);
		}
	}

	return (num * sign);
}
