#include "main.h"

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
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
