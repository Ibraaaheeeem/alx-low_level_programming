#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: This function
 * prints all possible
 * combinations of two
 * digit numbers
 * Return: ALways 0
 *
 */

int main(void)
{

	int n = 0;
	int m = 0;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (m != n && n < m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (m + n < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
