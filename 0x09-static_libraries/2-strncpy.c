#include "main.h"

/**
 * _strncpy  - concatenates string
 *
 * @src: source string
 * @dest: destination string
 * @n: Number of bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
