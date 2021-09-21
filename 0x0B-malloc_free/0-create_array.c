#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: size of the array, passed to create_array
 * @c: char to initialize the array wtih
 *
 * Return: pointer to the address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		while (size--)
			arr[size] = c;
	}
	else
		return (NULL);
	return (arr);
}
