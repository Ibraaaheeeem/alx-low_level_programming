#include "main.h"

/**
 * _strcat - concatenates string
 *
 * @src: source string
 * @dest: destination string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int i = 0;
	int len_src = 0;
	int len_new_string;

	while (dest[i] != '\0')
	{
		len_dest++;
	}

	while (src[i] != '\0')
	{
		len_src++;
	}

	len_new_string = len_dest + len_src + 1;
	char *new_string[len_new_string];

	for (i = 0; i < len_dest; i++)
	{
		*new_string[i] = dest[i];
	}

	for (i = len_dest; i < len_src + len_dest; i++)
	{
		*new_string[i] = src[i];
	}
	*new_string[i] = '\0';

	return (*new_string);
}
