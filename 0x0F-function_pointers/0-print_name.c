#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed, passed to print_name
 * @f: callback, passed to print_name
 *
 * Return: nth, void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
