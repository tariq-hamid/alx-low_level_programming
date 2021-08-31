#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nth, void
 */
int times_table(void)
{
	int i, j, ij;

	for (i = 0; i < 10; i++)
	{
		printf("0, ");
		for (j = 1; j < 10; j++)
		{
			ij = i * j;
			if (i == 0)
			{
				if (j == 9)
					printf("  0");
				else if (j >= 2)
					printf("  0,");
				else
					printf(" 0,");
			}
			else
			{
				additional(i, j, ij);
			}
		}
		printf("\n");
	}
}

/**
 * additional - remaining code
 * @i: passed to additional
 * @j: passed to additional
 * @ij: passed to additional
 *
 * Return: nth, void
 */
void additional(int i, int j, int ij)
{
	if (i == 1)
	{
		if (j == 9)
			printf("  %d", j);
		else if (j >= 2)
			printf("  %d,", j);
		else
			printf(" %d,", j);
	}
	else
	{
		if (j == 1)
			printf(" %d,", i);
		else
		{
			if (ij < 10)
			{
				if (j == 9)
					printf("  %d", ij);
				else
					printf("  %d,", ij);
			}
			else
			{
				if (j == 9)
					printf(" %d", ij);
				else
					printf(" %d,", ij);
			}
		}
	}
}
		}
	}
}
