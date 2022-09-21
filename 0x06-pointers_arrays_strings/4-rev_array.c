#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of bytes to reverswe
 * Return: result of comparison
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int t = a[i];

		a[i] = a[n - i - 1];
		a[n - i] = t;
		i++;
		j--;
	}
}
