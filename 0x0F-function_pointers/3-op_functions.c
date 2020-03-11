#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: number to add to
 * @b: number to add
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: number to subtract from
 * @b: number to subtract
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multoplies a by b
 * @a: number to multiply
 * @b: number to multiply by
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: number to divide
 * @b: number to divide by
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mods a by b
 * @a: number to mod
 * @b: number to mod by
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
