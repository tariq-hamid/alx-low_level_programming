#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long sum, x, y;
	int i;

	i = 0;
	sum = 0;
	x = 1;
	y = 2;
	while (y < 4000000)
	{
		sum = y + x;
		x = y;
		y = sum;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}

