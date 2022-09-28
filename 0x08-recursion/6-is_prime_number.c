#include "main.h"

/**
 * is_prime_number -checks if a number is prime
 *
 * @n: the number to check
 * Return: 1 if  number is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (check_prime(2, n));
}


/**
 * check_prime -checks if a number is prime
 *
 * @num: the number to check
 * @i: potential divisor
 * Return: 1 if  number is prime 0 otherwise
 */

int check_prime(int i, int num)
{
	if ((num % i == 0) && (i != num))
		return (0);
	else if (i == num)
		return (1);
	return (check_prime(i + 1, num));
}
