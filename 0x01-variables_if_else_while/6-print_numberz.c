#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: This function
 * prints the english
 * alphabets in lower case
 * using the putchar function
 * ending with a newline
 *
 * Return: ALways 0
 *
 */

int main(void)
{

	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
