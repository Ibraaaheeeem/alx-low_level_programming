#include <stdio.h>
/**
 * main - This program prints the number of
 * argunments passed to the program
 * to the command line followed by newline
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
