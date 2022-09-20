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
	int minus = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = n * 10 + (s[i] - '0');
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		if (s[i] == 45)
		{
			++minus;
			if (minus % 2 == 0)
				sign = 1;
			else
				sign = -1;
		}

		i++;
	}
	return (n * sign);
}
