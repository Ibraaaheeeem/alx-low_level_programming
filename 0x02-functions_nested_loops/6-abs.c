#include "main.h"

/**
 * _abs - Entry point
 *
 * Function: This function
 * computes the absolute valu
 * of an integer.
 *
 * @n : This is the input number
 *
 * Return: The absolute value of 
 * the integer
 *
 */

int _abs(int n)
{
	if (n <= 0)
	{
		return (-n);
	}
	return (n);
}
