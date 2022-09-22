#include "main.h"

/**
 * print_number -prints number
 * all words of a string
 * @n: integer to print
 * Return: converted string
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	else if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
