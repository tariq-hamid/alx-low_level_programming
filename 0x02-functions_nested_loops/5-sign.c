#include "holberton.h"

/**
 * print_sign - checks the sign of n
 * @n: passed to print_sign
 *
 * Return: 1 if +ve, 0 if 0, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

