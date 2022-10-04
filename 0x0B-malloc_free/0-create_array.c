#include "main.h"
#include <stdlib.h>
/**
 * create_array - reates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: The character to initialise with
 * Return: array of length size containng c
 */

char *create_array(unsigned int size, char c)
{
	int total_size = size * sizeof(char);
	int j = 0;
	char *arr;

	arr = malloc(total_size);

	if (size == 0 || arr == NULL)
		return ('\0');
	for (j = 0; j < size; j++)
	{
		*arr[j] = c;
	}
	arr[size] = '\0';
	return (arr);
}
