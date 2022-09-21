#include "main.h"

/**
 * _strncat - concatenates string
 * with at most n bytes from src
 *
 * @src: source string
 * @n: max bytes to concat
 * @dest: destination string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

/*
* while (src[j] != '\0')
* {
*dest[i] = src[j];
*j++;
*i++;
*if (i >= n - 1)
*break;
*}
*dest[i] = '\0';
*/
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
