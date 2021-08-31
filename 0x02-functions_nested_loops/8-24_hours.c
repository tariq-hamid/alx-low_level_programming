#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: nth, void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
				printf('0');
			printf(i + ':');
			if (j < 10)
				printf('0');
			printf(j + '\n');
		}
	}
}

