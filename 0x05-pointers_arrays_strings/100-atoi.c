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
	int brk;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10;
			n -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	return (n * sign);
}
