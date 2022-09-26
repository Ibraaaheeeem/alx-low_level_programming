#include "main.h"

/**
 * _strstr- finds the first occurence of a string
 * in another string.
 * @needle: the string to find
 * @haystack: the string to search
 * Return: the pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *string, *pattern;

	while (*haystack)
	{
		str1 = haystack;
		pattern = needle;

		while (*haystack == *pattern && *haystack)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (str1);

		haystack = str1 + 1;
	}
	return (0);
}
