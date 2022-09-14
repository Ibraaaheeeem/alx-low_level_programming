#include "main.h"

/**
 * times_table - function name
 *
 * Function: This function
 * prints the 9 times table
 * starting with 0
 *
 * Return: Nothing
 *
 */

void times_table(void)
{
	int n1 = 0, n2 = 0, p = 0;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = 0; n2 < 9; n2++)
		{
			p = n1 * n2;

			if (p > 10)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
				if (n2 < 8)
					_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(p + '0');
				if (n2 < 8)
					_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}

