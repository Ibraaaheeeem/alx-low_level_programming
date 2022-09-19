#include "main.h"
/**
 * puts2 - This function
 * prints a string to stdout
 * at every other character 
 *
 * @str: The string variable to print
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
