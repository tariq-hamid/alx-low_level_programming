#include "variadic_functions.h"

/**
 * print_all - prints any type of data
 * @format: a list of types of arguments passed to the function
 *
 * Return: nth, void
 */
void print_all(const char * const format, ...)
{
	int j = 0, last_argument;
	char type;
	va_list parameters;

	va_start(parameters, format);
	while ((format != NULL) && (format[j]))
	{
		last_argument = count_type_format(format);
		type = *(format + j);
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(parameters, int));
				print_comma(j, last_argument);
				j++;
				break;
			case 'i':
				printf("%d", va_arg(parameters, int));
				print_comma(j, last_argument);
				j++;
				break;
			case 'f':
				printf("%f", va_arg(parameters, double));
				print_comma(j, last_argument);
				j++;
				break;
			case 's':
				printf("%s", make_nil(va_arg(parameters, char *)));
				print_comma(j, last_argument);
				j++;
				break;
			default:
				j++;
			break;
		}
	}
	printf("\n");
	va_end(parameters);
}

/**
 * count_type_format - counts valid type in format
 * @format: format to be used, passed to count_type_format
 *
 * Return: count of the valid types
 */
int count_type_format(const char * const format)
{
	int i = 0, j = 0;
	char type;

	while ((*(format + j) != '\0') && (format != NULL))
	{
		type = *(format + j);
		switch (type)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}
	}
	return (i);
}

/**
 * print_comma - prints a comma and space when valid
 * @j: first number to be compared, passed to print_comma
 * @x: second number to be compared, passed to print_comma
 *
 * Return: nth, void
 */
void print_comma(int j, int x)
{
	if (j != x)
	{
		printf(", ");
	}
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