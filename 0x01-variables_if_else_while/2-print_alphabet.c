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
	char c = 'a';

	for (n = 0; n < 26 ; n++)
		putchar(c + n);
	putchar('\n');
	return (0);
}
