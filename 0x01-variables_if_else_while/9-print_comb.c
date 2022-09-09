#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: This function
 * prints all possible
 * combinations of single
 * digit numbers
 * Return: ALways 0
 *
 */

int main(void)
{

	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
