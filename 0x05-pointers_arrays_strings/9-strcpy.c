#include "main.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination, passed to _strcpy
 * @src: source, passed to _strcpy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
