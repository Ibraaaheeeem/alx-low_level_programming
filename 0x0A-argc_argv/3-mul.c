#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two
 * numbers and print the result
 * to the command line followed by newline
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int r = 1;
	int a, b;

	if (argc  < 3)
	{
		printf("Error");
		exit(1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n",a * b);
}
