#include "holberton.h"

/**
 * print_alphabet - prints a to z to the stdout
 *
 * Return: returns nth, void
 */
void print_alphabet(void)
{
	char c;
	
	for (c = "a"; c <= "z"; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}

