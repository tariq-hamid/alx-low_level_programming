#include "holberton.h"

/**
 * _strdup - allocates space in memory; containing a copy of str
 * @str: pointer to str
 *
 * Return: pointer to the memory space
 */
char *_strdup(char *str)
{
	char *space;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	space = malloc(sizeof(char) * size + 1);
	if (space != NULL)
	{
		for (; i <= size; i++)
			space[i] = str[i];
		space[i] = '\0';
	}
	else
		return (NULL);
	return (space);
}
