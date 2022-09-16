#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Function: This function
 * prints numbers 0 - 14
 * ten times
 * followed by a newline
 *
 *
 */

void more_numbers(void)
{
	int n;
	int l;

	for (l = 0; l < 10; l++)
	{
	for (n = 0; n < 15; n++)
	{

	if (n >= 10)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
	}
	_putchar('\n');
	}
}
