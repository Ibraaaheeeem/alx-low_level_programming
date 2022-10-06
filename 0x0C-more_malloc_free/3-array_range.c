#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value
 * @max: last value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, n;
	int *p;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	p = malloc(sizeof(int) * n);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < n; i++)
		p[i] = min + i;

	return (p);
}
