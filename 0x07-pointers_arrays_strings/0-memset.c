#include "main.h"

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
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
