#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array to stdout
 * @a: array passed to print_array
 * @n: number of elements to be printed
 *
 * Return: nth, void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
