#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long sum = 2;
	long x = 1;
	long y = 2;
	long fib = 0;

	while (fib <= 4000000)
	{
		fib = x + y;
		if (fib % 2 == 0)
		{
			sum += fib;
		}
		x = y;
		y = fib;
	}
	printf("%ld\n", sum);
	return (0);
}

