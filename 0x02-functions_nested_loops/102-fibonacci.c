#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, x;

	i = 0;
	sum = 0;
	x = 0;
	while (i < 50)
	{
		sum = sum + x;
		if (i == 49)
			printf("%d", x);
		else
			printf("%d, ", x);
		x = sum;
		i++;
	}
	return (0);
}

