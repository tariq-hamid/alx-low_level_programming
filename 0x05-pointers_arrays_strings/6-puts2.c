#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other element of a string
 * @str: passed to puts2
 *
 * Return: nth, void
 */
void puts2(char *str)
{
	int i = 0, len;

	len = strlen(str);

	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
