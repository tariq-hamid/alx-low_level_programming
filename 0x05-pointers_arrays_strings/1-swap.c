#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: value to be swapped, passed to swap_int
 * @b: value to be swapped, passed to swap_int
 *
 * Return: nth, void
 **/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
