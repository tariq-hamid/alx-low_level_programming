#include "main.h"
#include <string.h>

/**
 * puts_half - prints the half of a string
 * @str: passed to puts_half
 *
 * Return: nth, void
 */
void puts_half(char *str)
{
	int len, half, i;

	len = strlen(str);
	half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
