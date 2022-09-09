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
	int num;
	char cx;

	for (num = 0; num < 16; num++)
	{
		if (num >= 0 && num <= 9)
			cx = (char)(num + '0');
		else
			cx = (char)(num - 10 + 'a');
		putchar(cx);
	}
	putchar('\n');
	return (0);
}
