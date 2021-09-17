#include <ctype.h>

/**
 * _isalpha - checks if c is a letter or not
 * @c: the char passed to _isalpha
 *
 * Return: 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	return (0);
}

