#include <stdio.h>

/**
 * main - entry point prints the number of arguments passed to it
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
