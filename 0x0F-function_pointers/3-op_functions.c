#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: first number, passed to op_add
 * @b: second number, passed to op_add
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first number, passed to op_sub
 * @b: second number, passed to op_sub
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number, op_mul
 * @b: second number, op_mul
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number, passed to op_div
 * @b: second number, passed to op_div
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of 2 numbers
 * @a: first number, passed to op_mod
 * @b: second number, passed to op_mod
 *
 * Return: the remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
