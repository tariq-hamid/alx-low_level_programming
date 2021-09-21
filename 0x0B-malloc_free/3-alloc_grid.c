#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2D array of ints
 * @width: width of the array, passed to alloc_grid 
 * @height: height of the array, passed to alloc_grid
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
