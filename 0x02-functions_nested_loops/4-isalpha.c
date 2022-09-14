#include "main.h"

/**
 * _islower - Entry point
 *
 * Function: This function
 * checks if a character
 * is an alphabet, upper or
 * lowercase
 *
 * @c : This is the character to check
 *
 * Return: 1 if argument is alphabet
 * 0 otherwise
 *
 */

int _islower(int c)
{
/* c - character to check */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
