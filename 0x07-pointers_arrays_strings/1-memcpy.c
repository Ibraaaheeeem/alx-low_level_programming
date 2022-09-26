#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: the source of the copy
 * @dest: the destination of the copy
 * @n:The number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
