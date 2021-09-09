#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates 2 strings, uses at most n bytes from src
 * @dest: passed to _strncat
 * @src: passed to _strncat
 * @n: passed to _strncat
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = strlen(dest), len_src = strlen(src), i = 0;

	if (len_src > n)
	{
		while (i < n)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	else
	{
		while (src[i] != '\0')
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (dest);
}
