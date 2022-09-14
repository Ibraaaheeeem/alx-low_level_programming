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
int n;
unsigned long int n1 = 1;
unsigned long int n2 = 2;
unsigned long int next;

printf("%lu, ", n1);
printf("%lu, ", n2);

for (n = 2; n < 95; n++)
{

	next = n2 + n1;
	if (n == 94)
		printf("%lu\n", next);
	else
		printf("%lu, ", next);
	n1 = n2;
	n2 = next;
}
return (0);
}
