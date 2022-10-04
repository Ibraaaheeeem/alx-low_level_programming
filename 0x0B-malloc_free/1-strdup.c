#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 *
 * @str: The string to copy
 * Return: pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{

	int strlength = 0;
	int i = 0;
	int j = 0;
	char *new_memory;

	if (str == NULL)
		return ('\0');

	while (str[i] != '\0')
	{
		strlength++;
		i++;
	}
	strlength++;
	new_memory = malloc(sizeof(*str) * strlength);

	if (new_memory == NULL)
		return ('\0');
	for (j = 0; j < strlength; j++)
	{
		new_memory[j] = str[j];
	}
	new_memory[strlength] = '\0';
	return (new_memory);
}
