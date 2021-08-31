#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: nth, void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i + '0');
			_putchar(':');
			if (j < 10)
				_putchar('0');
			_putchar(j + '0');
			_putchar(10);
		}
	}
}

