#include "main.h"
/**
 * _strcpy - This function
 * copies a string including the null byte
 * to another buffer
 *
 * @dest: buffer destination
 * @src: source string
 * Return: copied string buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
