#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of arguments passed
 * @separator: string to be printed between the strings
 *
 * Return: nth, void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s%s", make_nil(va_arg(parameters, char *)), separator);
				else
					printf("%s", make_nil(va_arg(parameters, char *)));
			}
			else
			{
				printf("%s", make_nil(va_arg(parameters, char *)));
			}
		}
	}
	printf("\n");
	va_end(parameters);
}

/**
 * make_nil - change the string s to be "(nil)" if s is NULL
 * @s: string to be used, passed to make_nil
 *
 * Return: pointer to the string @s
 */
char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}