#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: address of the pointer, passed to set_string
 * @to: new value, passed to set_string
 *
 * Return: nth, void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
