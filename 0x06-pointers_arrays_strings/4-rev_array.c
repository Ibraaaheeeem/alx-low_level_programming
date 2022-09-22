#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of bytes to reverswe
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int t = a[i];

		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
