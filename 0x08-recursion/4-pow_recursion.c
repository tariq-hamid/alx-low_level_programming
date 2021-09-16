#include "holberton.h"

/**
 * _pow_recursion - return the value of x to the power of y
 * @x: number, passed to _pow_recursion
 * @y: exponent, passed to _pow_recursion
 *
 * Return: x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
