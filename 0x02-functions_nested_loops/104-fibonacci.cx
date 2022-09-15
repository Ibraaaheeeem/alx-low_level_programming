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

unsigned long int i;
unsigned long int n1 = 1;
unsigned long int n2 = 2;
unsigned long int l = 1000000000;
unsigned long int l1a;
unsigned long int l1b;
unsigned long int l2a;
unsigned long int l2b;

printf("%lu", n1);

for (i = 2; i < 91; i++)
{
	printf(", %lu", n2);
	n2 += n1;
	n1 = n2 - n1;
}

l1a = (n1 / l);
l1b = (n1 % l);
l2a = (n2 / l);
l2b = (n2 % l);


for (i = 92; i < 99; ++i)
{
printf(", %lu", l2a + (l2b / l));
printf("%lu", l2b % l);
l2a = l2a + l1a;
l1a = l2a - l1a;
l2b = l2b + l1b;
l1b = l2b - l1b;

}

printf("\n");
return (0);
}
