#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to scan
 * @accept: the bytes
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0, check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check  = 0;
		for (j = 0; accept[j] != '0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
			}
		}
		if (check == 0)
			return (count);
	}
	return (0);
}
