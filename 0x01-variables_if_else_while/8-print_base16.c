#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}

	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
