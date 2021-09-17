#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point prints the sum of a variable amount of numbers
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		while (--argc > 0)
		{
			if (is_valid(argv[argc]))
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
* is_valid - checks if a string contain any letters
* @s: string passed to is_valid
*
* Return: 1 if valid, 0 otherwise
*/
int is_valid(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
			return (0);
		s++;
	}
	return (1);
}
