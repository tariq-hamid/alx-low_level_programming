#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int sum, x, y;
	int i;

	i = 0;
	sum = 0;
	x = 1;
	y = 2;
	while (i < 50)
	{
		sum = y + x;
		if (i == 0)
			printf("%lld, %lld, ", x, y);
		else if (i == 49)
			printf("%lld\n", y);
		else
			printf("%lld, ", y);
		x = y;
		y = sum;
		i++;
	}
	return (0);
}

