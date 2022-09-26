#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory to fill with bytes
 * @b: The byte to fill with
 * @n:The number of times to fill with byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
