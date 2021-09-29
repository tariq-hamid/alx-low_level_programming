#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be used, passed to int_index
 * @size: size of the array, passed to int_index
 * @cmp: function used to compare values, passed to int_index
 *
 * Return: returns the index of the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int match = -1, i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				match = i;
				return (match);
			}
			i++;
		}
	}
	return (match);
}
