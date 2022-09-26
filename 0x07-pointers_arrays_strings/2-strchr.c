#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to find the character in
 * @c: the character to find
 * Return: pointer to first occurence of char c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
