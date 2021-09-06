#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nth, void
 */
void print_rev(char *s)
{
	int i = 0, len;

	len = strlen(s) - 1;

	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
	puts(s);
}

/**
 * swap_char - swaps the values of two char
 * @a: value to be swapped
 * @b: value to be swapped
 *
 * Return: nth, void
 **/
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
