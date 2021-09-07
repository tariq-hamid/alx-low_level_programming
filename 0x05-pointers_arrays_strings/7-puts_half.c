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

	if (len % 2 == 0)
	{
		for (i = half + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = half + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
