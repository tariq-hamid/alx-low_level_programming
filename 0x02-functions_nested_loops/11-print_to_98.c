#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: passed to print_to_98
 *
 * Return: nth, void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d,", n);
		n++;
		while (n < 98)
		{
			printf(" %d,", n);
			n++;
		}
		printf(" 98\n");
	}
	else if (n > 98)
	{
		printf("%d,", n);
		n--;
		while (n < 98)
		{
			printf(" %d,", n);
			n--;
		}
		printf(" 98\n");
	}
	else
		printf("%d\n", n);
}

