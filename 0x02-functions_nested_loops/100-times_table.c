# include<stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: passed to print_times_table
 *
 * Return: nth, void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("0,");
			else
				printf("%4d,", i * j);
		}
		printf("\n");
	}
}

