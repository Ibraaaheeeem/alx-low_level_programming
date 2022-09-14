#include "main.h"

/**
 * print_last_digit -function name
 *
 * Function: This function
 * prints the last digit of a number.
 *
 * @n : This is the input number
 *
 * Return: The value of
 * the last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
