#include "main.h"
#include <stdio.h>

/**
 * _atoi- This function
 * converts a string to an integer
 *
 * @s: The string variable to print
 * Return: The number format of the string
 */


int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int plus = 0;
	int minus = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + s[i];
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		else if (s[i] == '+')
		{
			plus++;
		}
		else if (s[i] == '-')
		{
			minus++;
		}

		i++;
	}
	if (minus % 2 != 0)
		n = -n;
	return (n);
}
