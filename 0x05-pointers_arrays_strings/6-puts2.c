#include "main.h"

/**
 * puts2 - prints every other element of a string
 * @str: passed to puts2
 *
 * Return: nth, void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
