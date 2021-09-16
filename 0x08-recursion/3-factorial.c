#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to be used, passed to factorial
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int factorial_;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	factorial_ = factorial(n - 1);
	return (n * factorial_);
}
