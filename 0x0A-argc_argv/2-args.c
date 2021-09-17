#include <stdio.h>

/**
 * main - entry point prints all the arguments passed to it
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
