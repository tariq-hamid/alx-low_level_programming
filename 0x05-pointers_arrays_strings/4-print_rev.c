#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 *
 * Return: nth, void
 */
void print_rev(char *s)
{
	int i, len, right;
	char tmp;

	len = strlen(s);
	right = len - 1;

	for (i = 0; i < right; i++)
	{
		tmp = s[i];
		s[i] = s[right];
		s[right] = tmp;
		right--;
	}
	printf("%s\n", s);
}
