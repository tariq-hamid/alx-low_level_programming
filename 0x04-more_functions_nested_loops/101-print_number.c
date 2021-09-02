#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: passed to print_number
 *
 * Return: nth, void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
