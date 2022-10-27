#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - this program converts a
 * binary number to an unsigned int
 * @b:binary number
 * Return: converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count, n = 0, base = 0;
	int power, num;

	count = strlen(b);
	num = 0;
	if (!b)
	{
		return (0);
	}
	for (n = count - 1; n >= 0; n--)
	{
		if (!(*b == '0' || *b == '1'))
		{
			return (0);
		}
		if (*b == '1')
		{
			num += num + base;
		}
		base = base * 2;
	}
	return (num);
}
