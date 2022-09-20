#include "main.h"
#include <stdio.h>

/**
 * _atoi- This function
 * converts a string to an integer
 *
 * @s: The string variable to print
 *
 */


void _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int plus = 0;
	int minus = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10) + (s[i] + '0');
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
	printf("%d\n", n);
}
