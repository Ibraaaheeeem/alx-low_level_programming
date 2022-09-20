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
	int  i = 0;
	signed int n = 0;
	int plus = 0;
	int minus = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10) + (s[i] - '0');
			if (s[i + 1] < 48 || s[i + 1] > 57)
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
