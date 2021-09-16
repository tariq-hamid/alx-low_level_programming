#include "main.h"

/**
 * is_prime_number - return 1 if n is prime
 * @n: number, passed to is_prime_number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - return 1 if n is prime
 * @n: number to be checked, passed to is_prime
 * @m: number to start checking from, passed to is_prime
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int m)
{
	if (m <= 1)
		return (1);
	else if (n % m == 0)
		return (0);
	return (is_prime(n, m - 1));
}
