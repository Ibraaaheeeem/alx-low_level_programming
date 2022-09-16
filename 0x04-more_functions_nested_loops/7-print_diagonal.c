#include "main.h"
/**
 * print_diagonal- Entry point
 *
 * Function: This function
 * prints diagonal lines in the terminal
 * followed by a newline
 *
 * @n: The number of times the character
 * will be printed
 *
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int c = 0;

		for (c = 0; c < i; c++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
