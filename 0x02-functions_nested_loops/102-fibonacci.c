#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, x, y;

	i = 0;
	sum = 0;
	x = 1;
	y = 2;
	while (i < 50)
	{
		sum = y + x;
		if (i == 0)
			printf("%d, %d, ", x, y);
		else if (i == 49)
			printf("%d\n", y);
		else
			printf("%d, ", y);
		x = y;
		y = sum;
		i++;
	}
	return (0);
}

