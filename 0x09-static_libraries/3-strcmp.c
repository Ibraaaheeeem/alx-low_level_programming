#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int d = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			d = s1[i] - s2[i];
			return (d);
		}
	}
	return (d);
}
