#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point, generates a random password
 *
 * Return: Always 0
 */
int main (void)
{
	char a;
	int b;

	srand(time(0));
        while (b <= 2645)
	{
		c = rand() % 128;
		b += a;
		putchar(a);
	}
	putchar(2772 - b);
	return (0);
}
