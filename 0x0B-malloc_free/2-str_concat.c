#include "main.h"
#include <stdlib.h>

/**
 * str_concat - copies a string
 *
 * @s1: The string to copy
 * @s2: The string to copy
 * Return: pointer to a newly
 * allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{

	int s1length = 0;
	int s2length = 0;
	int i = 0;
	int j = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		s1length++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2length++;
		j++;
	}
	new_string = malloc(s1length + s2length + 1);

	if (new_string == NULL)
		return ('\0');
	for (i = 0; i < s1length; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = i; j < s2length + s1length; j++)
	{
		new_string[j] = s2[j - i];
	}
	new_string[s1length + s2length] = '\0';
	return (new_string);
}
