#include <ctype.h>

/**
 * _islower - checks if the passed parameter is lowercase
 * @c: the char to be passed to _islower
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}

