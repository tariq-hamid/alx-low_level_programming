#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: passed to rev_string
 *
 * Return: nth, void
 */
void rev_string(char *s)
{
	int i = 0, len;

	len = strlen(s) - 1;

	while (length > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}

/**
 * swap_char - swaps the values of two chars, x and y
 * @x: passed to swap_char
 * @y: passed to swap_char
 *
 * Return: nth, void
 **/
void swap_char(char *x, char *y)
{
	char tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
