#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: passed to _strcat
 * @src: passed to _strcat
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest), i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
