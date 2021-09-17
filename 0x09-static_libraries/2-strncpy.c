#include "main.h"

/**
 * _strncpy - copies src to dest
 * @dest: passed to _strncpy
 * @src: passed to _strncpy
 * @n: bytes used, passed to _strncpy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
