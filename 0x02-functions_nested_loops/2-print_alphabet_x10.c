#include "holberton.h"

/**
 * print_alphabet_x10 - prints a to z 10x to the stdout
 *
 * Return - returns nth, void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}

