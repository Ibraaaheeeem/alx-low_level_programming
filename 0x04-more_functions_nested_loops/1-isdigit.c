#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Function: This function
 * checks if a character
 * is a digit
 *
 * @c : This is the character to check
 *
 * Return: 1 if argument is digit
 * 0 otherwise
 *
 */

int _isdigit(int c)
{
/* c - character to check */
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
