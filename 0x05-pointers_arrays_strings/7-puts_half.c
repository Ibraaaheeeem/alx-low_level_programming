#include "main.h"
/**
 * puts_half - This function
 * prints half of a string to stdout
 *
 * @str: The string variable to print
 *
 */


void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		n = i / 2;

	else if (i % 2 == 1)
		n = (i - 1) / 2;

	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
