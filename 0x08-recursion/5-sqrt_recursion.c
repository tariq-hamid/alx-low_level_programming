#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number, passed to _sqrt_recursion 
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (sqrt_(0, n));
}

/**
 * sqrt_ - returns the square root of a number
 * @n: test number, passed to sqrt_
 * @m: squared number, passed to sqrt_
 *
 * Return: the square root of n
 */
int sqrt_(int n, int m)
{
	if (n > m / 2)
		return (-1);
	else if (n * n == m)
		return (n);
	return (sqrt_(n + 1, m));
}
