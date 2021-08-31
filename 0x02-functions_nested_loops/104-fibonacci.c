#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long fib;

	while (i <= 97)
	{
		fib = x + y;
		if (counter < 97)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		x = y;
		y = fib;
		i++;
	}
	printf("\n");
	return (0);
}

