#include <stdio.h>
/**
 * main - Entry point
 *
 * This program computes and print the sum of all the
 * multiples of 3 and 5 below 1024(exclusive)
 *
 * main - entry point
 *
 * Function: Computes sum of multiples
 *
 * Return: Always 0
 */
int main(void)
{
int i;
int sum = 0;

for (i = 0;  i < 1024; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
	}
}
printf("%d\n", sum);
return (0);
}
