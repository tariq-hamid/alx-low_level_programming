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
	while (i < 49)
	{
		sum = y + x;
		if (i == 0)
			printf("%ld, %ld, ", x, y);
		else if (i == 48)
			printf("%ld\n", y);
		else
			printf("%ld, ", y);
		x = y;
		y = sum;
		i++;
	}
	return (0);
}

