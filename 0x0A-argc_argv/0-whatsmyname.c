#include <stdio.h>

/**
 * main - entry point prints the name of the program
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
