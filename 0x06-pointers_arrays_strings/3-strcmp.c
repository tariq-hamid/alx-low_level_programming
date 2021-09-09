#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: passed to _strcmp
 * @s2: passed to _strcmp
 *
 * Return: integer for result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (true)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			i++;
		}
	}
	return (diff);
}
