#include "main.h"
#include <stdio.h>
/**
 * print_triangle - entry point
 *
 * Function: This function
 * prints triangle
 * followed by a newline
 *
 * @size: Dimention of triangle
 *
 * Return: 0 always
 */
void print_triangle(int size)
{
int i;
int j;
int k;

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
	_putchar(' ');
for (k = 0; k < i + 1; k++)
	_putchar('#');
_putchar('\n');
}
if (size <= 0)
	_putchar('\n');
return (0);
}
