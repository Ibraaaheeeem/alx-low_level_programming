#include "main.h"

/**
 * _islower - Entry point
 *
 * Function: This function
 * checks if a character
 * is lowercase
 *
 * @c : This is the character to check
 *
 * Return: 1 if argument is lowercase
 * 0 otherwise
 *
 */

int _islower(int c)
{
/* c - character to check */
	if (islower(c)) /*>= 'a' && c <= 'z')*/
		return (1);
	else
		return (0);
}
