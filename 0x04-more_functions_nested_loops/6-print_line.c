#include "main.h"
/**
 * print_line - Entry point
 *
 * Function: This function
 * prints numbers 0 - 9
 * followed by a newline
 *
 * @n: The number of times the character
 * will be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
