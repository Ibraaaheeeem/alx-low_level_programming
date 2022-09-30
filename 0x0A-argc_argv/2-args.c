#include <stdio.h>
/**
 * main - This program prints all the
 * argunments passed to the program
 * to the command line followed by newline
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
