#include "main.h"
#include <string.h>

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to, passed to _memcpy
 * @src: memory area to be copied from, passed to _memcpy
 * @n: number of bytes, passed to _memcpy
 *
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
