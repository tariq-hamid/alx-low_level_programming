#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: passed to _strlen_recursion
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s != '\0')
	{
		total++;
		total += _strlen_recursion(s + 1);
	}
	return (total);
}
