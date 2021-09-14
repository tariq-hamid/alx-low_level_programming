#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched, passed to _strspn
 * @accept: string to be used, passed to _strspn
 *
 * Return: number of bytes in the initial segment of s,
 * which are part of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
