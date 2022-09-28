#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 *
 * @n: the number to find the square root of
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int r = n / 2;

	,f (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (find_root(r, n));
}


/**
 * find_root - recursive function to check for the root
 *
 * @rt: test number to check if equal to root
 * @num: the nubmer to find square root of
 * Return: the natural square root of n
 */
int find_root(int rt, int num)
{
	if (rt * rt > num)
		return (-1);
	if (rt * rt == num)
		return (rt);

	return (find_root(rt + 1, num));
}
