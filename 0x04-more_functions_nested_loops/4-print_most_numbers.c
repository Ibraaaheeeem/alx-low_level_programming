#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point
 *
 * Function: This function
 * prints numbers 0 - 9
 * except 2 and 4
 * followed by a newline
 *
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	if (n != 2 && n != 4)
		_putchar(n + '0');
	}
	_putchar('\n');
}
