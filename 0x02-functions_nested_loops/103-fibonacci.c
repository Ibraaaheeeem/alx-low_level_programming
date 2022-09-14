#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * main - entry point
 *
 * Functions: prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int n = 0;
long int n1 = 1;
long int n2 = 2;
long int next;
long int sum = 2;

for (n = 0; ; n++)
{
	next = n2 + n1;
	if (next > 4000000)
	{
		printf("%li\n", sum);
		break;
	}
	if (next % 2 == 0)
		sum += next;
	n1 = n2;
	n2 = next;
}
return (0);
}
