#include "main.h"

/**
 * print_numbers - prints 0-9 to stdout
 *
 * Return: nth, void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
