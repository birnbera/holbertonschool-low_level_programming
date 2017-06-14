#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - return pointer to op_func corresponding to `s'
 * @s: string representing desired operation
 *
 * Return: pointer to op_func taking two ints and returning an int,
 * or NULL if string does not correspond to a valid operation.
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
	int i;

	for (i = 0; ops[i].op; ++i)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	puts("Error");
	exit(99);
}
