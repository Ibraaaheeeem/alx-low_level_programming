#include "main.h"

/**
 * print_alphabet -  prints lower
 * case alphabets 10 times
 *
 * Function: This function
 * prints alphabets in lowercase
 * followed by a newline ten times
 *
 * Return: ALways 0
 *
 */

void print_alphabet_x10(void)
{
	int c;
	int n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	n++;
	}
}
