#include "main.h"

/**
 * print_line - prints a line
 * @n: passed to print_line
 *
 * Return: nth, void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
