#include "main.h"
#include <string.h>

/**
 * binary_to_uint - this program converts a
 * binary number to an unsigned int
 * @b:binary number
 * Return: converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count, n = 0, base = 0;
	unsigned int num;

	count = _strlen(b);
	num = 0;
	if (!b)
	{
		return (0);
	}
	for (n = count - 1; n >= 0; n--)
	{
		if ((b[n] < '0' || b[n] > '1'))
		{
			return (0);
		}
		else if (b[n] == '1')
		{
			num += num + base;
		}
		base = base * 2;
	}
	return (num);
}
/**
 * _strlen - gets the lenght of input strings
 * @str: input string
 * Return: len of the string
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

