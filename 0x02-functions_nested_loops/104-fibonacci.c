#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum, x, y;
	int i;

	i = 0;
	sum = 0;
	x = 1;
	y = 2;
	while (i < 97)
	{
		sum = y + x;
		if (i == 0)
			printf("%lu, %lu, ", x, y);
		else if (i == 96)
			printf("%lu\n", y);
		else
			printf("%lu, ", y);
		x = y;
		y = sum;
		i++;
	}
	return (0);
}

