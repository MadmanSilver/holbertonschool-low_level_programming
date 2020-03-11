#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets the function associated with a given operator
 * @s: operator to check
 *
 * Return: pointer to appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (strcmp(ops[i].op, s) && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
