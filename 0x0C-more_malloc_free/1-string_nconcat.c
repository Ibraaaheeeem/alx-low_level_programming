#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - this program concatenates
 * two strings
 *
 * @s1: s1
 * @s2: s2
 * @n: the number of bytes from @s2 to concat to @s1
 *
 * Return: newly allocated space in memory;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1length = 0;
	unsigned int s2length = 0;
	unsigned int new_length;
	char *concat_string;

	while (s1 && s1[i] != '\0')
		s1length++;
	while (s2 && s2[j] != '\0')
		s2length++;
	if (s2length > n)
		new_length = s1length + n + 1;
	else
		new_length = s1length + s2length + 1;

	concat_string = malloc((new_length + 1));
	if (concat_string == NULL)
		return (NULL);

	for (i = 0; i < s1length; i++)
	{
		concat_string[i] = s1[i];
		i++;
	}
	for (j = i; j < new_length; j++)
	{
		concat_string[j] = s2[j - i];
		j++;
	}
	concat_string[new_length] = '\0';
	return (concat_string);
}
