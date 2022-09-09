#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: This function
 * prints all possible distinct
 * combinations of two
 * digit numbers
 * Return: ALways 0
 *
 */

int main(void)
{

	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m < 10; m++)
		{
			for (n = 0; n < 10; n++)
			{
				for (o = 0; o < 10; o++)
				{
					if ((n > l || n == l && o > m))
					{	
						putchar(l + '0');
						putchar(m + '0');
						putchar(' ');
						putchar(n + '0');
						putchar(o + '0');
						
						/* Test if end of output
						 * is not reached
						 */

						if (!(l == 9 && m == 8
							&& n == 9 && o == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
