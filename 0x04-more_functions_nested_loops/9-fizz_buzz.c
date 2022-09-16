#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: This function
 * prints numbers 1 - 100
 * with Fizz Buzz
 * followed by a newline
 *
 * Return: 0 always
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("%s ", "FizzBuzz");
		else if (n % 3 == 0)
			printf("%s ", "Fizz");
		else if (n % 5 == 0)
			printf("%s ", "Buzz");
		else if (n < 100)
			printf("%d ", n);
		else if (n == 100)
			printf("%d", n);
	}
	printf("\n");
}
