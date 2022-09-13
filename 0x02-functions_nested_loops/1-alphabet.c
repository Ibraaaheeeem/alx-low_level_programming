#include "main.h"

/**
 *
 * Function: This function
 * prints alphabets in lowercase
 * followed by a newline
 *
 * Return: ALways 0
 *
 */

int print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++){
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
