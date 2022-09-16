#include "main.h"
/**
 * print_square- Entry point
 *
 * Function: This function
 * prints a square in the terminal
 * followed by a newline
 *
 * @size The number of times the character
 * will be printed
 *
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
