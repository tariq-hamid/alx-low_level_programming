#include "main.h"
#include <string.h>

/**
 * _strchr - locates a char in a string
 * @s: string to be searched, passed to _strchr
 * @c: char to be checked, passed to _strchr
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	cp = strchr(s, c);
	return (cp);
}
