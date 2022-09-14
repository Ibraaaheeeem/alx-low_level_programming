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
int n1 = 1;
int n2 = 2;
int next;

printf("%d, ", n1);
printf("%d, ", n2);

while (n < 48)
{
	next = n2 + n1;
	if (n < 48)
		printf("%i, ", next);
	else if (n == 47)
		printf("%i\n", next);
	n1 = n2;
	n2 = next;
	n++;
}
return (0);
}
