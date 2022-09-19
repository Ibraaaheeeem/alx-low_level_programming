#include "main.h"
/**
 * print_rev - This function
 * prints a string to stdout
 * in reverse
 *
 * @s: The string variable to print
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i != -1)
	{
	_putchar(s[i]);
	i--;
	}
	_putchar('\n');
}
