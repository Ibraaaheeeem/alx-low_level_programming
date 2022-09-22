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
	int i = 0, j = 0, k = 0;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		k++;
	}

	while (src[j] != '\0')
	{
		dest[k + i] = src[j];
		j++;
		i++;
		if (i >= n)
			break;
	}
	dest[k + i] = '\0';

	return (dest);
}
