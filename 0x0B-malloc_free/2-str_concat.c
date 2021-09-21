#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates s1 and s2
 * @s1: string 1, passed to str_concat
 * @s2: string 2, passed to str_concat
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str = NULL;
	int i = 0, j = 0, size_1 = strlen(s1), size_2 = strlen(s2);

	new_str = (char *) malloc(size_1 + size_2 + 1);
	if (new_str != NULL)
	{
		for (; i < size_1; i++)
		{
			new_str[i] = s1[i];
		}
		for (; j < size_2; j++)
		{
			new_str[i + j] = s2[j];
		}
		new_str[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
