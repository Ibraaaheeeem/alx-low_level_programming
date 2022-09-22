#include "main.h"

/**
 * rot13- encodes a string with rot13
 * all words of a string
 * @s: string to convert
 * Return: converted string
 */

char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0' &&  (s[i] >= 'A' && s[i] <= 'Z')
		|| (s[i] >= 'a' && s[i] <= 'z'); i++)
	{
		{
			s[i] = s[i] + 13;
			if (s[i] > 'z')
				s[i] -= 'z';
		}
	}

	return (s);
}
