#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @s: string passed to cap_string
 
 * Return: the pointer to the string.
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (check_sep(str[i]) && (str[i + 1] >= 'a'
					     && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

/**
 * check_sep - checks if a is a valid word separator
 * @c: passed to check_sep
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int check_sep(char c)
{
	int i = 0, is_it = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			    ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (c == separators[i])
			is_it = 1;
	}
	return (is_it);
}
