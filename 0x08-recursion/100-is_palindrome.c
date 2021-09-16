#include "main.h"

/**
 * is_palindrome - return 1 if s is a palindrome
 * @s: string to be checked, passed to is_palindrome 
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int x = 1;

	check(s, 0, _strlen_recursion(s) - 1, &x);
	return (x);
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string, passed to _strlen_recursion
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s != '\0')
	{
		total++;
		total += _strlen_recursion(s + 1);
	}
	return (total);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @m: start index
 * @n: end index
 * @x: flag to indicate if a string is a palindrome
 *
 * Return: nth, void
 */
void check(char *s, int m, int n, int *x)
{
	if (m <= n)
	{
		if (s[m] == s[n])
			*x *= 1;
		else
			*x *= 0;
		check(s, m + 1, n - 1, x);
	}
}
