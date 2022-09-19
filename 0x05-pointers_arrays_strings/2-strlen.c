#include <string.h>
/**
 * _strlen - This function
 * returns the length of a string
 *
 * @s: The string variable to find length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
