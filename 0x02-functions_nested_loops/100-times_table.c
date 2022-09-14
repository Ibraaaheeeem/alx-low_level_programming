#include "main.h"

/**
 * print_times_table - function name
 *
 * Function: This function
 * prints n times table
 * starting with 0
 *
 * Return: Nothing
 *
 */

void print_times_table(int n)
{

	int n1 = 0, n2 = 0, p = 0;

	if (n > 15  || n < 0)
		return;
	for (n1 = 0; n1 <= n; n1++)
	{
		for (n2 = 0; n2 <= n; n2++)
		{
			p = n1 * n2;
			if (p >= 100)
			{
				if (n2 != 0)
					_putchar(' ');
				_putchar(p / 100 + '0');
				_putchar((p % 100) % 10 + '0');
				_putchar(p % 10 + '0');

				if (n2 < n)
					_putchar(',');
			}
			else if (p >= 10)
			{
				if (n2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
				if (n2 < n)
					_putchar(',');
			}
			else
			{
				if (n2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
				if (n2 < n)
					_putchar(',');
			}
		}
		_putchar('\n');

	}
}

