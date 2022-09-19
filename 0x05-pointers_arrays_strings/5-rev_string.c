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

	while (s[i] != '\0')
	{
		i++;
	}

	int j = --i;
	char new_s[j];
	i = 0;

	while (j != -1)
	{
	new_s[j] = s[i];
	j--;
	i++;
	}
}
