#include "main.h"
/**
 * rev_string - This function
 * reverses a string
 *
 * @s: The string variable to reverse
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	for (i = 0; i <= j / 2 ; i++)
	{
		char tmp;

		tmp = s[i];
		s[i] = s[j - i];
		s[j - i] = tmp;

	}
}
