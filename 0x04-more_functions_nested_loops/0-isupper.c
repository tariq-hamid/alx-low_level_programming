#include <ctype.h>

/**
 * _isupper - checks if c is an uppercase or not
 * @c: passed to _isupper
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
