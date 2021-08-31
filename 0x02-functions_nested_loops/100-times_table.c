#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: passed to print_times_table
 *
 * Return: nth, void
 */
void print_times_table(int n)
{
	int i, j, ij, k;

	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			ij = j * i;
			if (i != 0)
			{
				_putchar(',');
				for (k = len(ij); k <= len(n * n); k++)
					_putchar('  ');
			}
			if (ij > 9)
			{
				_putchar(ij / 10 + '0');
			}
			_putchar(ij % 10 + '0');
		}
		_putchar('\n');
	}
}

/**
 * len - counts the number of digits in a number
 * @n: number to be used
 *
 * Return: returns the number of digits
 */
int len(int n)
{
	int digits = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}
