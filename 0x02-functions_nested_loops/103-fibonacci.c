#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long sum, x, y, sum_;

	sum = 0;
	sum_ = 0;
	x = 1;
	y = 2;
	while (y < 4000000)
	{
		if (x % 2 == 0)
			sum_ = sum_ + x;
		if (y % 2 == 0)
			sum_ = sum_ + y;
		sum = y + x;
		x = y;
		y = sum;
	}
	printf("%ld\n", sum_);
	return (0);
}

