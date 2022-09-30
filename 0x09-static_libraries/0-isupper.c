#include "main.h"

/**
 * _isupper - Entry point
 *
 * Function: This function
 * checks if a character
 * is uppercase
 *
 * @c : This is the character to check
 *
 * Return: 1 if argument is uppercase
 * 0 otherwise
 *
 */

int _isupper(int c)
{
/* c - character to check */
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
