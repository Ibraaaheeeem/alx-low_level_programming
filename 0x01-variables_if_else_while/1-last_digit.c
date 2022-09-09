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
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * compare random number with zero
	 * and print whether positive,
	 * negative or zero
	 */

	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %i is %d and is greater than 5\n",				n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %i is 0\n", n);
	else if ((n < 6) & (n != 0))
		printf("Last digit of %i is %d and is less than 6 and not 0\n",
				n, lastdigit);
	return (0);
}
