#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point
 *
 * Function: This function
 * prints numbers 0 - 9
 * followed by a newline
 *
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
