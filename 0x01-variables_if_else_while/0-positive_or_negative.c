#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Function: This function
 * generates a random number
 * and prints whether its positive,
 * negative or zero
 *
 * Return: ALways 0
 *
 */

int main(void)
{

/*
 * Function: This function gets a random number
 * It then compares whether it is negative,
 * positive or zero and then prints
 * accordingly
 */

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * compare random number with zero
	 * and print whether positive,
	 * negative or zero
	 */

	if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	return (0);
}
