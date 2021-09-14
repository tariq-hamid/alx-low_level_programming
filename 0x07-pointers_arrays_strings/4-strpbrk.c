#include "holberton.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched, passed to _strpbrk
 * @accept: string to be used, passed to _strpbrk
 *
 * Return: a pointer to the byte in s,
 * that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbk(s, accept));
}
