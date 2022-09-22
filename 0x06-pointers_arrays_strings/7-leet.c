#include "main.h"

/**
 * leet - capitalizes
 * all words of a string
 * @s: string to convert
 * Return: converted string
 */

char *leet(char *s)
{
	char a[] = "oleat";
	char b[] = "01347";
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] || s[i] + 32 == a[j])
				s[i] = b[j];
		}
	}

	return (s);
}
