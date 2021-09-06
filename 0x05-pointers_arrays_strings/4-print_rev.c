#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 *
 * Return: nth, void
 */
void print_rev(char *s)
{
	int length;

	length = strlen(s) - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
