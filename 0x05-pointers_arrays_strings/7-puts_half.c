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
	{
		n = i / 2;

		for ( ; j < i; j++)
			_putchar(str[j]);
		}

	}
	else if (i % 2 == 1)
	j = (i - 1) / 2;
	for (; j < (i - 1); j++)
		_putchar(str[j + 1]);
}
	_putchar('\n');
}
