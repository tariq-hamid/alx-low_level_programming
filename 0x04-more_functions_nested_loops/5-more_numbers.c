#include "main.h"

/**
 * more_numbers - prints 0-14 to stout 10x
 *
 * Return: nth, void
 */
void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
