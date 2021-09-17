#include <ctype.h>

/**
 * _isdigit - checks if c is a digit (0 - 9)
 * @c: passed to _isdigit
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	return (1);
}
