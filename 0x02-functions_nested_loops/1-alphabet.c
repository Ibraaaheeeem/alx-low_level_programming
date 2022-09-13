#include "main.h"

/**
 * print_alphabet -  functio that prints lower
 * case alphabets
 *
 * Function: This function
 * prints alphabets in lowercase
 * followed by a newline
 *
 * Return: ALways 0
 *
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
