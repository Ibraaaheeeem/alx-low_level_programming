#include "main.h"

/**
 * print_sign- Entry point
 *
 * Function: This function
 * prints the sign of aninput number
 * + if positive, - if negtive
 * and 0 if zero
 *
 * @n : This is the input number
 *
 * Return: 1 if n is positive,
 * -1 if n is negative
 * 0 if n is zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n < 0)
	{
		printf('-');
		return (-1);
	}
	else if (n == 0)
	{
		printf('0');
		return (0);
	}
}
