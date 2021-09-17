#include "main.h"
#include <string.h>

/**
 * _memset - fills a memory block with a constant byte
 * @s: address, passed to _memset
 * @b: char, passed to _memset
 * @n: number of bytes, passed to _memset
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
