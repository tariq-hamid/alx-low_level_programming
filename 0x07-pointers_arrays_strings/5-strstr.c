#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched in, passed to _strstr
 * @needle: string to be searched, passsed to _strstr
 *
 * Return: Returns a pointer to the beginning
 * of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
