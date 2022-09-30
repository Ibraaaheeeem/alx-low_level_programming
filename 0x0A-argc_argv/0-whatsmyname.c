#include <stdio.h>
/**
 * main - This program prints the name of the program
 * to the command line
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
