#include <stdio.h>

/**
 * main - Entry Point
 *
 * Funtion: This program prints a message
 * to the standard error followed
 * by a new line
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
/* declare a string variable */
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, "%s", msg);
return (1);
}
