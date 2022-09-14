#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function name
 *
 * Function: This function
 * prints a set of all natural
 * numbers from n to 98
 *
 * @n: number start from
 *
 * Return: Set of natural numbers
 * between n and 98
 *
 */

void print_to_98(int n)
{
	int c;

	for (c = n; c <= 98; c++)
	{
		printf("%d", c);
		if (c < 98)
			printf(", ");
		else
			printf("\n");
	}
}

