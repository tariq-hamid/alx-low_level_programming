#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nth, void
 */
void times_table(void)
{
	int i, j, ij, k;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			ij = j * i;
			if (i != 0)
			{
				_putchar(',');
				for (k = len(ij); k <= len(9 * 9); k++)
					_putchar(' ');
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
