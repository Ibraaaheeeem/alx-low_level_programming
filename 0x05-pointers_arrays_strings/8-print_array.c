#include <stdio.h>
#include "main.h"
/**
 * print_array - This function
 * prints the n elements of an array
 * followed by a newline.
 *
 * @a : The array to print the elements of
 * @n : The number of elements to print
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else if (i < n - 1)
			printf("%d, ", a[i]);
	}
}
