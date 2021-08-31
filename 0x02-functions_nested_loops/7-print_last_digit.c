#include "holberton.h"
#include <stdlib.h>

/**
 * print_last_digit - returns the last digit of n
 * @n: passed to print_last_digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar(abs(n % 10));
	return (abs(n % 10));
}

