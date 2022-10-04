#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  copies a string
 *
 * @width: The string to copy
 * @height: The string to copy
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{

	int s1length = 0;
	int s2length = 0;
	int i = 0;
	int j = 0;
	int **array;

	if (width == 0 || height == 0)
		return ('\0');
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(array[j]);
			}
			free(array);
		}
		else
		{
			for (j = 0; j < height; j++)
			{
				array[i][j] = 1;
			}
		}
	}
	return (array);
}
