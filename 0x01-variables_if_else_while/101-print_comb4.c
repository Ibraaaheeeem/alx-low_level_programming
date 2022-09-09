#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: This function
 * prints possible distinct
 * combinations of three
 * digit numbers
 * Return: ALways 0
 *
 */

int main(void)
{

	int n = 0;
	int m = 0;
	int l = 0;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (l = 0; l < 10; l++)
			{

				if (m != n && n != l && l != m && l > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');

					if (l + m + n < 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
